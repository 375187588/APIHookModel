#ifndef USERAPIHOOKSET_H
#define USERAPIHOOKSET_H

#ifdef Windows
#include <windows.h>
#endif // Windows

typedef struct _UserAPIHOOKSet
{
#ifdef Windows
	PROC *Old;
	PROC *New;
#elif UNIX
#endif // Windows
}UserAPIHOOKSet;

#endif // USERAPIHOOKSET_H