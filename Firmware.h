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
	dll void UpdatePassability();

	dll int IndexUart();
	dll void MessageUart(int index, char* strBuffer);

	dll t_segment GetSegment(int index);
	dll t_circle GetCircle(int index);
	dll t_vertex GetVertex(int index);
	dll t_circle GetObstacle(int index);
	dll t_circle GetFalseObstacle(int index);

	dll void GetLCDText(int line, char* strBuffer);
	
	dll boolean GetSelectPin(void);
	dll void SetSelectPin(boolean state);
	dll boolean GetStartPin(void);
	dll void SetStartPin(boolean state);
	dll boolean GetModePin(void);
	dll void SetModePin(boolean state);
	dll void SendUART(const char* strBuffer);
	dll void SendUART2(const char* strBuffer);
	dll t_robot GetRobot(void);

	dll int32 GetTime(void);
	dll int32 GetCurrentAction(void);

}

#endif