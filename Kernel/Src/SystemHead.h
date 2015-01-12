#pragma once

#ifdef Windows
#include <ntddk.h>
#ifdef WDF
#include <wdf.h>
#endif

DRIVER_INITIALIZE DriverEntry;   //驱动入口函数
#else
#error "This operating system is not supported"
#endif
