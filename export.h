#pragma once
#ifndef EXPORT_H
#define EXPORT_H

#ifndef EXPORT_DLL
#define EXPORT_API  __declspec(dllimport)
#else
#define EXPORT_API  __declspec(dllexport)
#endif
#endif // !EXPORT_H
