#ifndef BASE_H
#define BASE_H

#ifndef SYSTEM_BASE
#define SYSTEM_BASE

#ifndef STATIC_LIB
#ifdef LIBAPIHOOK
#define INTERFACE __declspec(dllexport)
#else
#define INTERFACE __declspec(dllimport)
#endif
#endif

#ifdef CALL
#ifndef DEFAULT_CALL
#define DEFAULT_CALL _stdcall
#endif
#endif // CALL

#ifdef Windows
#ifndef CALL
#ifndef STATIC_LIB
#define INTERFACE_CLASS(ThisClass) class INTERFACE ThisClass
#define INTERFACE_FUNCTION(Return,Name)  INTERFACE Return Name
#endif
#define CLASS(ThisClass) class ThisClass
#define FUNCTION(Return,Name)  Return Name
#else
#ifndef STATIC_LIB
#define INTERFACE_CLASS(ThisClass) class INTERFACE ThisClass
#define INTERFACE_FUNCTION(Return,Call,Name)  INTERFACE Return Call Name
#endif
#define CLASS(ThisClass) class ThisClass
#define FUNCTION(Return,Call,Name)  Return Call Name
#endif
#elif  UNIX
#ifndef STATIC_LIB
#define INTERFACE_CLASS(ThisClass)
#define INTERFACE_FUNCTION(Return,Name)
#endif
#define CLASS(ThisClass)
#define FUNCTION(Return,Name)
#endif // Windows


#endif //SYSTEM_BASE
#endif // BASE_H
