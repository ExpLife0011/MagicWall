// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // �� Windows ͷ���ų�����ʹ�õ�����
// Windows ͷ�ļ�: 
#include <windows.h>



// TODO:  �ڴ˴����ó�����Ҫ������ͷ�ļ�
 
#include <tlhelp32.h>



// TODO:  �ڴ˴����ó�����Ҫ������ͷ�ļ�

#define WONDERWALL_API						__declspec(dllexport) __stdcall
#define WONDERWALL_BOOL_EXPORT				EXTERN_C BOOL WONDERWALL_API