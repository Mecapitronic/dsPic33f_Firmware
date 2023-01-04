/********** INCLUDE *********/
#include "Firmware.h"
#ifndef _WINDLL
#include <iostream>
#endif
//#define _CRT_SECURE_NO_WARNINGS
#pragma comment(lib, "winmm.lib")
#pragma comment( user, "Compiled on " __DATE__ " at " __TIME__ )

/********** VARIABLES *******/
vector<string> messageUartTX;
vector<string> messageUartRX;
int indexEcriture;
int indexLecture;
//http://franckh.developpez.com/tutoriels/posix/pthreads/
pthread_t pthread_PILOT;
pthread_t pthread_Interruption_1;
pthread_t pthread_Interruption_2;
pthread_t pthread_Interruption_RX;
pthread_t pthread_uart_TX;
pthread_t pthread_uart_RX;

bool arret = false;
t_vertex INVALID_VERTEX = {0};
t_circle INVALID_CIRCLE = {0};
t_segment INVALID_SEGMENT = {0};
CSerial serial;

/********** METHODS *********/
#ifndef _WINDLL
#define myprintf printf
#else
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
void getText(char* strBuffer)
{
	static char* sTest = "Test My String";
	strcpy(strBuffer, sTest);
}
void GetLCDText(int line, char* strBuffer)
{
	strcpy(strBuffer, LCDText[line]);
}
int IndexUart()
{
	return indexEcriture;
}

t_vertex GetVertex(int index)
{
	if(index>=0 && index <MAX_VERTEX)
		return vertex[index];
	else
		return INVALID_VERTEX;
}
t_circle GetCircle(int index)
{
	if(index>=0 && index <MAX_CIRCLE)
		return circle[index];
	else
		return INVALID_CIRCLE;
}
t_segment GetSegment(int index)
{
	if(index>=0 && index <MAX_SEGMENT)
		return segment[index];
	else
		return INVALID_SEGMENT;
}
t_circle GetObstacle(int index)
{
	if(index>=0 && index <MAX_OBSTACLE)
		return obstacle[index];
	else
		return INVALID_CIRCLE;
}
t_circle GetFalseObstacle(int index)
{
	if(index>=0 && index <MAX_FALSE_OBSTACLE)
		return false_obstacle[index];
	else
		return INVALID_CIRCLE;
}

void InitMap()
{
	Initialize_Map(0);
	Initialize_Passability_Graph();
}

void Update_Passability(int x, int y)
{
	robot.mm.x = x;
	robot.mm.y = y;

	Update_Passability_Robot();
}

boolean Get_PIN_1(void)
{
	return PIN_1;
}
void Set_PIN_1(boolean state)
{
	PIN_1 = state;
}
boolean Get_SELECT(void)
{
	return SELECT;
}
void Set_SELECT(boolean state)
{
	SELECT = state;
}
boolean Get_START(void)
{
	return START_PILOT;
}
void Set_START(boolean state)
{
	START_PILOT = state;
}
void InitDsPIC(void)
{
	IEC0bits.T2IE = 0;
	IEC1bits.T4IE = 0;
	SELECT = 0;
	START_PILOT = 0;
	PORTBbits.RB9 = 0;
}
void SetSharp(int32 ID, int32 distance)
{
	//SHARP[ID] = distance;
}
t_robot Get_Robot()
{
	return robot;
}
int32 CurrentTime()
{
	return current_time;
}
int32 CurrentAction(int index, char* strBuffer)
{
	string str = "Action Pilot";
	strcpy(strBuffer, str.c_str());
	return current_action;
}
void Send_UART(char* strBuffer)
{
	messageUartRX[indexLecture] = strBuffer;
	//int nBytesSent = serial.SendData(message.c_str(), strlen(message.c_str()));
	indexLecture++;
	if (indexLecture >= 100)
		indexLecture = 0;
	myprintf(strBuffer);
	
}

/********** THREAD INTERRUPTION dsPIC ******/
static void * thread_Interruption_1(void * p_data)
{
	//chrono::steady_clock::time_point  start, end;
	
	pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, NULL);
	myprintf("Start thread Interruption 1\n");
	while (!arret)
	{
		//start = chrono::high_resolution_clock::now();
		Interruption_PRIMAIRE();
		INFO_ARM_BUSY = !INFO_ARM_BUSY;
		timerSleep(0.005);
		//end = chrono::high_resolution_clock::now();
		//myprintf("interruption 1: %0.3f ms, current_time: %d ms\n", (end - start).count() / 1e6, current_time);
	}
	myprintf("End thread Interruption 1\n");
	return NULL;
}
static void * thread_Interruption_2(void * p_data)
{
	//chrono::steady_clock::time_point start, end;

	pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, NULL);
	myprintf("Start thread Interruption 2\n");
	while (!arret)
	{
		//start = chrono::high_resolution_clock::now();
		Interruption_SECONDAIRE();
		timerSleep(0.025); timerSleep(0.025);
		//end = chrono::high_resolution_clock::now();
		//myprintf("interruption 2: %0.3f ms\n", (end - start).count() / 1e6);
	}
	myprintf("End thread Interruption 2\n");
	return NULL;
}
static void * thread_Interruption_RX(void * p_data)
{
	pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, NULL);
	myprintf("Start thread Interruption Uart RX\n");
	while (!arret)
	{
		_U1RXInterrupt();
		myprintf("Message received");
	}
	myprintf("End thread Interruption Uart RX \n");
	return NULL;
}
static void * thread_PILOT(void * p_data)
{
	pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, NULL);
	int ret = PILOT();
	arret = true;
	myprintf("End thread PILOT\n");
	return NULL;
}
static void * thread_uart_TX(void * p_data)
{
	pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, NULL);
	myprintf("Start thread Uart TX\n");
	//if (serial.Open(1, 125000))
	{
		myprintf("Port opened successfully");
	}
	//else
		myprintf("Failed to open port!");

	U1STAbits.TRMT = 1;
	string message = "";
	indexEcriture = 0;
	while (!arret)
	{
		while (U1STAbits.TRMT == 1 && !arret){/*Sleep(10);*/};
		if (!arret)
		{
			message += U1TXREG;
			if (U1TXREG == 10)
			{
				messageUartTX[indexEcriture] = message;
				//int nBytesSent = serial.SendData(message.c_str(), strlen(message.c_str()));
				indexEcriture++;
				if (indexEcriture >= 100)
					indexEcriture = 0;
				message = "";
#ifndef _WINDLL
				Send_UART("S49;1498;1498;1498;1498;1498;1498;950;950;1498;1498;");
#endif
			}
			U1STAbits.TRMT = 1;
		}
	}
	myprintf("End thread Uart TX\n");
	return NULL;
}
static void * thread_uart_RX(void * p_data)
{
	pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, NULL);
	myprintf("Start thread Uart RX\n");
	indexLecture = 0;
	int indexLecture2 = 0;
	string message = "";
	while (!arret)
	{
		while ((indexLecture != indexLecture2) && !arret)
		{
			message = messageUartRX[indexLecture2];
			indexLecture2++;
			if (indexLecture2 >= 100)
				indexLecture2 = 0;
			while (message != "" && !arret)
			{
				while(U1STAbits.URXDA == 1 && !arret);
				U1RXREG=message.at(0);
				message.erase(0, 1);
				U1STAbits.URXDA = 1;
			}
			myprintf("Message sended");
			message = "";
		}
	}
	U1STAbits.URXDA == 0;

	myprintf("End thread Uart RX\n");
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

			ret = pthread_cancel(pthread_Interruption_1);
			//ret = pthread_join(pthread_Interruption_1, NULL);

			ret = pthread_cancel(pthread_Interruption_2);
			//ret = pthread_join(pthread_Interruption_2, NULL);

			ret = pthread_cancel(pthread_uart_TX);
			//ret = pthread_join(pthread_uart_TX, NULL);

			ret = pthread_cancel(pthread_uart_RX);
			//ret = pthread_join(pthread_uart_RX, NULL);

			ret = pthread_cancel(pthread_Interruption_RX);

			myprintf("Abort des Thread OK :) \n");
		}
		else
		{
			//myprintf("%s", strerror(ret));
		}
	}
	else
	{
		//printf("%s", strerror(ret));
	}
}

#ifdef _WINDLL
int Firmware(void)
#else
int main(void)
#endif
{
	int ret = 0;

	messageUartTX.clear();
	for (int i = 0; i < 100; i++)
	{
		messageUartTX.push_back("");
	}
	messageUartRX.clear();
	for (int i = 0; i < 100; i++)
	{
		messageUartRX.push_back("");
	}

	myprintf("Starting Firmeware Robot !\n");

	arret = false;
	//Lancement des thread Interruption primaire et secondaire et pilot et UART reception/transmission
	
	ret = pthread_create(&pthread_uart_RX, NULL, thread_uart_RX, NULL);
	pthread_setname_np(pthread_uart_RX, "uart_RX");
	if (!ret)
	{
		ret = pthread_create(&pthread_uart_TX, NULL, thread_uart_TX, NULL);
		pthread_setname_np(pthread_uart_TX, "uart_TX");
		if (!ret)
		{
			ret = pthread_create(&pthread_Interruption_1, NULL, thread_Interruption_1, NULL);
			pthread_setname_np(pthread_Interruption_1, "Interruption_1");
			if (!ret)
			{
				ret = pthread_create(&pthread_Interruption_2, NULL, thread_Interruption_2, NULL);
				pthread_setname_np(pthread_Interruption_2, "Interruption_2");
				if (!ret)
				{
					ret = pthread_create(&pthread_Interruption_RX, NULL, thread_Interruption_RX, NULL);
					pthread_setname_np(pthread_Interruption_RX, "Interruption_RX");
					if (!ret)
					{
						ret = pthread_create(&pthread_PILOT, NULL, thread_PILOT, NULL);
						pthread_setname_np(pthread_PILOT, "PILOT");
						if (!ret)
						{
							myprintf("Lancement des thread OK !\n");
						}
						else
						{
							//myprintf("%s", strerror(ret));
						}
					}
					else
					{

					}
				}
				else
				{
					//myprintf("%s", strerror(ret));
				}
			}
			else
			{
				//myprintf("%s", strerror(ret));
			}
		}
		else
		{
			//myprintf("%s", strerror(ret));
		}
	}
	else
	{
		//myprintf("%s", strerror(ret));
	}

#ifndef _WINDLL
	char start = cin.get();
	PORTBbits.RB7 = 1;
#endif
	ret = pthread_join(pthread_PILOT, NULL);
	AbortFirmware();

	return ret;
}
