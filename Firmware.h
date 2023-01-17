#ifndef _FIRMWARE_H_
#define _FIRMWARE_H_

#ifndef _USE_OLD_OSTREAMS
using namespace std;
#endif

#define HAVE_STRUCT_TIMESPEC

#pragma comment(lib, "winmm.lib")
#pragma comment( user, "Compiled on " __DATE__ " at " __TIME__ )

#ifndef _WINDLL
#include <iostream>
#endif

#include <pthread.h>

//#include "Serial.h"

#include <Windows.h>
#include <chrono>

#include <string>
#include <vector>

extern "C"
{
#include "pilot.x\PILOT_main.h"

#ifdef _WINDLL
	#define dll __declspec(dllexport)
	dll int Firmware(void);
#else
	#define dll
	#define Firmware main
#endif

	dll void AbortFirmware(void);

	dll void InitMap();
	dll void InitDsPIC(void);

	dll int IndexUart();
	dll void MessageUart(int index, char* strBuffer);

	dll t_segment GetSegment(int index);
	dll t_circle GetCircle(int index);
	dll t_vertex GetVertex(int index);
	dll t_circle GetObstacle(int index);
	dll t_circle GetFalseObstacle(int index);

	dll void GetLCDText(int line, char* strBuffer);

	dll void Update_Passability(int x, int y);
	dll boolean Get_PIN_1(void);
	dll void Set_PIN_1(boolean state);
	dll boolean Get_SELECT(void);
	dll void Set_SELECT(boolean state);
	dll boolean Get_START(void);
	dll void Set_START(boolean state);
	dll void SetSharp(int32 ID, int32 distance);
	dll void Send_UART(const char* strBuffer);
	dll t_robot Get_Robot(void);

	dll int32 CurrentTime(void);
	dll int32 CurrentAction(int index, char* strBuffer);

}

#endif