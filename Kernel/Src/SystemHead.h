#pragma once

#ifdef Windows
#include <ntddk.h>
#ifdef WDF
#include <wdf.h>
#endif

DRIVER_INITIALIZE DriverEntry;   //������ں���
#else
#error "This operating system is not supported"
#endif