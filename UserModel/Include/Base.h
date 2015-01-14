#ifndef BASE_H
#define BASE_H

#ifndef SYSTEM_BASE
#define SYSTEM_BASE

#ifndef DEFAULT_CALL
#define DEFAULT_CALL _stdcall
#endif

#ifndef STATIC_LIB
#ifdef LIBAPIHOOK
#define INTERFACE __declspec(dllexport)
#else
#define INTERFACE __declspec(dllimport)
#endif
#endif

#ifdef Windows
#ifndef STATIC_LIB
#define INTERFACE_CLASS(ThisClass) class INTERFACE ThisClass
#define INTERFACE_FUNCTION(Return,Call,Name)  INTERFACE Return Call Name
#endif
#define CLASS(ThisClass) class ThisClass
#define FUNCTION(Return,Call,Name)  Return Call Name
#elif  UNIX
#ifndef STATIC_LIB
#define INTERFACE_CLASS(ThisClass)
#define INTERFACE_FUNCTION(Return,Call,Name)
#endif
#define CLASS(ThisClass)
#define FUNCTION(Return,Call,Name)
#define FUNCTION(Return,Name)
#endif // Windows


#endif //SYSTEM_BASE
#endif // BASE_H
