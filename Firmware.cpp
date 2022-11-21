/********** INCLUDE *********/
#include "Firmware.h"
#ifndef _WINDLL
#include <iostream>
#endif
//#define _CRT_SECURE_NO_WARNINGS

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
	OutputDebugString(strBuffer);
	
}

/********** THREAD INTERRUPTION dsPIC ******/
static void * thread_Interruption_1(void * p_data)
{
	pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, NULL);
	printf("Start thread Interruption 1\n");
	while (!arret)
	{
		Interruption_PRIMAIRE();
		INFO_ARM_BUSY = !INFO_ARM_BUSY;
		Sleep(5);
	}
	printf("End thread Interruption 1\n");
	return NULL;
}
static void * thread_Interruption_2(void * p_data)
{
	pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, NULL);
	printf("Start thread Interruption 2\n");
	while (!arret)
	{
		Interruption_SECONDAIRE();
		Sleep(50);
	}
	printf("End thread Interruption 2\n");
	return NULL;
}
static void * thread_Interruption_RX(void * p_data)
{
	pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, NULL);
	printf("Start thread Interruption Uart RX\n");
	while (!arret)
	{
		_U1RXInterrupt();
		OutputDebugString("Message received");
	}
	printf("End thread Interruption Uart RX \n");
	return NULL;
}
static void * thread_PILOT(void * p_data)
{
	pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, NULL);
	int ret = PILOT();
	arret = true;
	printf("End thread PILOT\n");
	return NULL;
}
static void * thread_uart_TX(void * p_data)
{
	pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, NULL);
	printf("Start thread Uart TX\n");
	//if (serial.Open(1, 125000))
	{
		printf("Port opened successfully");
	}
	//else
		printf("Failed to open port!");

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
	printf("End thread Uart TX\n");
	return NULL;
}
static void * thread_uart_RX(void * p_data)
{
	pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS, NULL);
	printf("Start thread Uart RX\n");
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
			OutputDebugString("Message sended");
			message = "";
		}
	}
	U1STAbits.URXDA == 0;

	printf("End thread Uart RX\n");
	return NULL;
}
void AbortFirmware(void)
{
	int ret = -1;
	printf("Abort des Thread ! \n");
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

			printf("Abort des Thread OK :) \n");
		}
		else
		{
			//printf("%s", strerror(ret));
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

	OutputDebugString("Starting Firmeware Robot !\n");

	arret = false;
	//Lancement des thread Interruption primaire et secondaire et pilot et UART reception/transmission
	
	ret = pthread_create(&pthread_uart_RX, NULL, thread_uart_RX, NULL);
	if (!ret)
	{
		ret = pthread_create(&pthread_uart_TX, NULL, thread_uart_TX, NULL);
		if (!ret)
		{
			ret = pthread_create(&pthread_Interruption_1, NULL, thread_Interruption_1, NULL);
			if (!ret)
			{
				ret = pthread_create(&pthread_Interruption_2, NULL, thread_Interruption_2, NULL);
				if (!ret)
				{
					ret = pthread_create(&pthread_Interruption_RX, NULL, thread_Interruption_RX, NULL);
					if (!ret)
					{
						ret = pthread_create(&pthread_PILOT, NULL, thread_PILOT, NULL);
						if (!ret)
						{
							printf("Lancement des thread OK !\n");
						}
						else
						{
							//printf("%s", strerror(ret));
						}
					}
					else
					{

					}
				}
				else
				{
					//printf("%s", strerror(ret));
				}
			}
			else
			{
				//printf("%s", strerror(ret));
			}
		}
		else
		{
			//printf("%s", strerror(ret));
		}
	}
	else
	{
		//printf("%s", strerror(ret));
	}

#ifndef _WINDLL
	char start = cin.get();
	PORTBbits.RB7 = 1;
#endif
	ret = pthread_join(pthread_PILOT, NULL);
	AbortFirmware();

	return ret;
}
