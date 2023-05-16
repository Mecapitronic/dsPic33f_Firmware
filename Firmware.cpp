/********** INCLUDE *********/
#include "Firmware.h"

/********** CONSTANTES *******/
#define byteArrayLength 2

/********** VARIABLES *******/
vector<string> messageUartTX;
vector<string> messageUartTX2;
vector<string> messageUartRX;
vector<string> messageUartRX2;
int indexEcriture;
int indexEcriture2;
int indexLecture;
int indexLecture2;
//http://franckh.developpez.com/tutoriels/posix/pthreads/
pthread_t pthread_PILOT;
pthread_t pthread_Interruption;
pthread_t pthread_uart;

bool arret = false;
t_vertex INVALID_VERTEX = { 0 };
t_circle INVALID_CIRCLE = { 0 };
t_segment INVALID_SEGMENT = { 0 };
//CSerial serial;

/********** METHODS *********/
#ifdef _WINDLL
void __cdecl myprintf(string str)
{
	OutputDebugString(str.c_str());
}
void __cdecl myprintf(const char* format, ...)
{
	char    buf[4096], * p = buf;
	va_list args;
	int     n;

	va_start(args, format);
	n = _vsnprintf(p, sizeof buf - 3, format, args); // buf-3 is room for CR/LF/NUL
	va_end(args);

	p += (n < 0) ? sizeof buf - 3 : n;

	while (p > buf && isspace(p[-1]))
		*--p = '\0';

	*p++ = '\r';
	*p++ = '\n';
	*p = '\0';

	OutputDebugString(buf);
}
#else
#define myprintf cout<<
#endif

void timerSleep(double seconds) {
	using namespace std::chrono;

	static HANDLE timer = CreateWaitableTimer(NULL, FALSE, NULL);
	static double estimate = 5e-3;
	static double mean = 5e-3;
	static double m2 = 0;
	static int64_t count = 1;

	while (seconds - estimate > 1e-7) {
		double toWait = seconds - estimate;
		LARGE_INTEGER due;
		due.QuadPart = -int64_t(toWait * 1e7);
		steady_clock::time_point  start = high_resolution_clock::now();
		SetWaitableTimerEx(timer, &due, 0, NULL, NULL, NULL, 0);
		WaitForSingleObject(timer, INFINITE);
		steady_clock::time_point end = high_resolution_clock::now();

		double observed = (end - start).count() / 1e9;
		seconds -= observed;

		++count;
		double error = observed - toWait;
		double delta = error - mean;
		mean += delta / count;
		m2 += delta * (error - mean);
		double stddev = sqrt(m2 / (count - 1));
		estimate = mean + stddev;
	}

	// spin lock
	auto start = high_resolution_clock::now();
	while ((high_resolution_clock::now() - start).count() / 1e9 < seconds);
}

void MessageUart(int index, char* strBuffer)
{
	strcpy(strBuffer, messageUartTX[index].c_str());
}
void GetLCDText(int line, char* strBuffer)
{
	string text = "";
	for (size_t i = 0; i < 20; i++)
	{
		text += LCDText[line][i];
	}
	strcpy(strBuffer, text.c_str());
}
int IndexUart()
{
	return indexEcriture;
}

t_vertex GetVertex(int index)
{
	if (index >= 0 && index < MAX_VERTEX)
		return vertex[index];
	else
		return INVALID_VERTEX;
}
t_circle GetCircle(int index)
{
	if (index >= 0 && index < MAX_CIRCLE)
		return circle[index];
	else
		return INVALID_CIRCLE;
}
t_segment GetSegment(int index)
{
	if (index >= 0 && index < MAX_SEGMENT)
		return segment[index];
	else
		return INVALID_SEGMENT;
}
t_circle GetObstacle(int index)
{
	if (index >= 0 && index < MAX_OBSTACLE)
		return obstacle[index];
	else
		return INVALID_CIRCLE;
}
t_circle GetFalseObstacle(int index)
{
	if (index >= 0 && index < MAX_FALSE_OBSTACLE)
		return false_obstacle[index];
	else
		return INVALID_CIRCLE;
}

void InitMap()
{
	Initialize_Map(0);
	Initialize_Passability_Graph();
}

boolean GetSelectPin(void)
{
	return SELECT;
}
void SetSelectPin(boolean state)
{
	SELECT = state;
}
boolean GetStartPin(void)
{
	return START_PILOT;
}
void SetStartPin(boolean state)
{
	START_PILOT = state;
}
boolean GetModePin(void)
{
	return MODE_PILOT;
}
void SetModePin(boolean state)
{
	MODE_PILOT = state;
}
boolean GetRecalagePin(void)
{
	return RECALAGE_PILOT;
}
void SetRecalagePin(boolean state)
{
	RECALAGE_PILOT = state;
}
t_robot GetRobot()
{
	return robot;
}
int32 GetTime()
{
	return current_time;
}
int32 GetCurrentAction(void)
{
	return current_action;
}
void SendUART(const char* strBuffer)
{
	messageUartRX[indexLecture] = strBuffer;
	//int nBytesSent = serial.SendData(message.c_str(), strlen(message.c_str()));
	indexLecture++;
	if (indexLecture >= 100)
		indexLecture = 0;
	//myprintf(strBuffer);
}
void SendUART2(const char* strBuffer)
{
	messageUartRX2[indexLecture2] = strBuffer;
	indexLecture2++;
	if (indexLecture2 >= 100)
		indexLecture2 = 0;
	//myprintf(strBuffer);
}

/********** THREAD INTERRUPTION dsPIC ******/
static void* thread_Interruption(void* p_data)
{
	//chrono::steady_clock::time_point  start, mid, end;

	pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, NULL);
	myprintf("Start thread Interruption\n");
	int i = 0;
	while (!arret)
	{
		//start = chrono::high_resolution_clock::now();
		TIMER_PRIMAIRE_INT();
		i += PERIOD_MS;
		if (i >= 50)
		{
			i = 0;
			TIMER_SECONDAIRE_INT();
		}
		//mid = chrono::high_resolution_clock::now();
		//myprintf("interruption 1: %0.3f ms, time calcul: %d ms\n", (mid - start).count() / 1e6, current_time);
		timerSleep(0.005);
		//end = chrono::high_resolution_clock::now();
		//myprintf("interruption 1: %0.3f ms, current_time: %d ms\n", (end - start).count() / 1e6, current_time);
	}
	myprintf("End thread Interruption\n");
	return NULL;
}

static void* thread_PILOT(void* p_data)
{
	pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, NULL);
	int ret = PILOT();
	arret = true;
	myprintf("End thread PILOT\n");
	return NULL;
}

static void* thread_uart(void* p_data)
{
	pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, NULL);
	myprintf("Start thread Uart\n");
	U1STAbits.TRMT = 1;
	U1STAbits.URXDA = 0;
	U2STAbits.TRMT = 1;
	U2STAbits.URXDA = 0;
	indexEcriture = 0;
	indexEcriture2 = 0;
	indexLecture = 0;
	indexLecture2 = 0;
	int indexLectureTmp = 0;
	int indexLecture2Tmp = 0;
	string messageRX = "";
	string messageRX2 = "";
	string messageTX = "";
	string messageTX2 = "";
	while (!arret)
	{
		if (indexLecture != indexLectureTmp)
		{
			messageRX = messageUartRX[indexLectureTmp];
			indexLectureTmp++;
			if (indexLectureTmp >= 100)
				indexLectureTmp = 0;
			while (messageRX != "" && !arret)
			{
				U1RXREG = messageRX.at(0);
				messageRX.erase(0, 1);
				U1STAbits.URXDA = 1;
				_U1RXInterrupt();
				U1STAbits.URXDA = 0;
			}
			messageRX = "";
		}

		if (indexLecture2 != indexLecture2Tmp)
		{
			messageRX2 = messageUartRX2[indexLecture2Tmp];
			indexLecture2Tmp++;
			if (indexLecture2Tmp >= 100)
				indexLecture2Tmp = 0;
			while (messageRX2 != "" && !arret)
			{
				U2RXREG = messageRX2.at(0);
				messageRX2.erase(0, 1);
				U2STAbits.URXDA = 1;
				_U2RXInterrupt();
				U2STAbits.URXDA = 0;
			}
			messageRX2 = "";
		}

		if (U1STAbits.TRMT == 0)
		{
			messageTX += U1TXREG;
			if (U1TXREG == 10)
			{
				messageUartTX[indexEcriture] = messageTX;
				indexEcriture++;
				if (indexEcriture >= 100)
					indexEcriture = 0;
				messageTX = "";
			}
			U1STAbits.TRMT = 1;
		}

		if (U2STAbits.TRMT == 0)
		{
			messageTX2 += U2TXREG;
			if (U2TXREG == 10)
			{
				messageUartTX2[indexEcriture2] = messageTX2;
				indexEcriture2++;
				if (indexEcriture2 >= 100)
					indexEcriture2 = 0;
				messageTX2 = "";
			}
			U2STAbits.TRMT = 1;
	}
	}

	myprintf("End thread Uart\n");
	return NULL;
}
void AbortFirmware(void)
{
	int ret = -1;
	myprintf("Abort des Thread ! \n");
	ret = pthread_cancel(pthread_PILOT);
	if (!ret)
	{
		//ret = pthread_join(pthread_PILOT, NULL);
		if (!ret)
		{
			arret = true;

			ret = pthread_cancel(pthread_Interruption);
			//ret = pthread_join(pthread_Interruption_1, NULL);

			ret = pthread_cancel(pthread_uart);
			//ret = pthread_join(pthread_Interruption_2, NULL);

			myprintf("Abort des Thread OK :) \n");
		}
	}
}

int Firmware(void)
{
	//Initialisation du dsPIC
	IEC0bits.T2IE = 0;
	IEC1bits.T4IE = 0;
	SELECT = 0;
	START_PILOT = 0;
	MODE_PILOT = 0;

	int ret = 0;

	messageUartTX.clear();
	for (int i = 0; i < 100; i++)
	{
		messageUartTX.push_back("");
	}

	messageUartTX2.clear();
	for (int i = 0; i < 100; i++)
	{
		messageUartTX2.push_back("");
	}

	messageUartRX.clear();
	for (int i = 0; i < 100; i++)
	{
		messageUartRX.push_back("");
	}

	messageUartRX2.clear();
	for (int i = 0; i < 100; i++)
	{
		messageUartRX2.push_back("");
	}

	myprintf("Starting Firmeware Robot !\n");

	arret = false;
	//Lancement des thread Interruption primaire et secondaire et pilot et UART reception/transmission

	ret = pthread_create(&pthread_Interruption, NULL, thread_Interruption, NULL);
	pthread_setname_np(pthread_Interruption, "Interruption");
	if (!ret)
	{
		ret = pthread_create(&pthread_uart, NULL, thread_uart, NULL);
		pthread_setname_np(pthread_uart, "UART");

		if (!ret)
		{
			ret = pthread_create(&pthread_PILOT, NULL, thread_PILOT, NULL);
			pthread_setname_np(pthread_PILOT, "PILOT");
			if (!ret)
			{
				myprintf("Lancement des thread OK !\n");
			}
		}
	}

#ifndef _WINDLL
	myprintf("Type 'start' to start the PILOT Match, or 'test' to enter test mode : \n");
	string in;
	cin >> in;
	myprintf("PILOT STARTING");
	if (in == "TEST" || in == "Test" || in == "test")
	{
		SetModePin(true);
		myprintf(" WITH MODE TEST");
	}
	myprintf(" !\n");
	SetStartPin(true);
	while (in != "exit")
	{
		cin >> in;
		SendUART(in.c_str());
	}
	AbortFirmware();
#endif
	ret = pthread_join(pthread_PILOT, NULL);
	AbortFirmware();

	return ret;
}
