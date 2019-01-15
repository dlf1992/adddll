#pragma once
#ifndef ADDDLL_H
#define ADDDLL_H

#include "export.h"
//EXPORT_API int add(int a,int b);
extern "C" EXPORT_API int _stdcall add(int a, int b);
#endif // !DDDLL_H
