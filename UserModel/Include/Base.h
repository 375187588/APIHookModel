#ifndef BASE_H
#define BASE_H

#ifndef SYSTEM_BASE
#define SYSTEM_BASE

#ifdef LIBAPIHOOK
#define INTERFACE __declspec(dllexport)
#else
#define INTERFACE __declspec(dllimport)
#endif

#ifdef Windows
#define INTERFACE_CLASS(ThisClass) class INTERFACE ThisClass
#define INTERFACE_FUNCTION(Return,Call,Name)  INTERFACE Return Call Name
#define INTERFACE_FUNCTION(Return,Name)       INTERFACE Return __stdcall Name
#define CLASS(ThisClass) class ThisClass
#define FUNCTION(Return,Call,Name)  Return Call Name
#define FUNCTION(Return,Name)       Return __stdcall Name
#elif  UNIX
#define INTERFACE_CLASS(ThisClass)
#define INTERFACE_FUNCTION(Return,Call,Name)
#define INTERFACE_FUNCTION(Return,Name)
#define CLASS(ThisClass)
#define FUNCTION(Return,Call,Name)
#define FUNCTION(Return,Name)
#endif // Windows

#endif //SYSTEM_BASE
#endif // BASE_H
