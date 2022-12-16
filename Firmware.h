#ifndef _FIRMWARE_H_
#define _FIRMWARE_H_

#ifndef _USE_OLD_OSTREAMS
using namespace std;
#endif

#define HAVE_STRUCT_TIMESPEC
#include <pthread.h>

#include "Serial.h"

#include <windows.h>
/*
#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdio.h>
#include <tchar.h>
#include <time.h>
#include<sys\timeb.h>
#include "guicon.h"
#include <crtdbg.h>
*/
#include <string>
#include <vector>

extern "C"
{
#include "pilot.x\PILOT_main.h"

//#ifdef _WINDLL
	__declspec(dllexport) int Firmware(void);
	__declspec(dllexport) void AbortFirmware(void);

	__declspec(dllexport) void InitMap();
	__declspec(dllexport) void InitDsPIC(void);

	__declspec(dllexport) int IndexUart();
	__declspec(dllexport) void MessageUart(int index, char* strBuffer);

	__declspec(dllexport) t_segment GetSegment(int index);
	__declspec(dllexport) t_circle GetCircle(int index);
	__declspec(dllexport) t_vertex GetVertex(int index);
	__declspec(dllexport) t_circle GetObstacle(int index);
	__declspec(dllexport) t_circle GetFalseObstacle(int index);

	__declspec(dllexport) void GetLCDText(int line, char* strBuffer);

	

	__declspec(dllexport) void Update_Passability(int x, int y);
	__declspec(dllexport) boolean Get_PIN_1(void);
	__declspec(dllexport) void Set_PIN_1(boolean state);
	__declspec(dllexport) boolean Get_SELECT(void);
	__declspec(dllexport) void Set_SELECT(boolean state);
	__declspec(dllexport) boolean Get_START(void);
	__declspec(dllexport) void Set_START(boolean state);
	__declspec(dllexport) void SetSharp(int32 ID, int32 distance);
	__declspec(dllexport) void Send_UART(char* strBuffer);
	__declspec(dllexport) t_robot Get_Robot(void);

	__declspec(dllexport) int32 CurrentTime(void);
	__declspec(dllexport) int32 CurrentAction(int index, char* strBuffer);

//#endif


}

#endif