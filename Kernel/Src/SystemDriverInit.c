#include "SystemHead.h"
#include <Windows.h>
#ifdef WDK81
#include "SystemDriverInit.tmh"
#endif // WDK8.1

#ifdef Windows
#if defined(WDF)||defined(WDM)
#ifdef ALLOC_PRAGMA
#pragma alloc_text(INIT, DriverEntry)
#endif
#else
#error "Illegal Driving Model"
#endif

NTSTATUS DriverEntry(_In_ struct _DRIVER_OBJECT *DriverObject ,_In_ PUNICODE_STRING RegistryPath)
{
	NTSTATUS status = STATUS_SUCCESS;
	return status;
}
#else
#error "This Operating System Is Not Supported"
#endif