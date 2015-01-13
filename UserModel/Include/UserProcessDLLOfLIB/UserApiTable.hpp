#ifndef  USERAPITABLE
#define USERAPITABLE
#include "UserAPIHOOKSet.h"
#include "../Base.h"
extern UserAPIHOOKSet *UserSetHookTable;
extern size_t UserAPIHOOKSize;
#define BEGIN_APITABLE(InitTable,MaxTableSize) UserAPIHOOKSet InitTable[MaxTableSize]={
#define END_APITABLE()  };
#define SET_TABLE(InitTable) UserSetHookTable=InitTable;UserAPIHOOKSize=sizeof(InitTable)/sizeof(UserAPIHOOKSet)
#ifdef Windows
#include <windows.h>
FUNCTION(bool , DEFAULT_CALL , CallNextTable)( PROC* , PROC* , bool );
#endif
#endif // USERAPITABLE
