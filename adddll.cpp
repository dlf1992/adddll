// adddll.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "adddll.h"

//int add(int a, int b)
int _stdcall add(int a, int b)
{
	return (a + b);
}

