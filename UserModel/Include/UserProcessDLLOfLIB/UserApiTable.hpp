#ifndef  USERAPITABLE
#define USERAPITABLE
#include "UserAPIHOOKSet.h"
#include "../Base.h"
extern UserAPIHOOKSet UserSetHookTable[];
#define BEGIN_TABLE() UserAPIHOOKSet UserSetHookTable[]={
#define SET_TABLE(Old,New) {Old,New},
#define END_TABLE()  {NULL,NULL}};
#ifdef Windows
#include <windows.h>
FUNCTION(PROC , DEFAULT_CALL , GetNextTable)( PROC );
#endif
#define GetNextTableFunction(type,ThisPROC) (type)(GetNextTable((PROC)((type)ThisPROC))
#endif // USERAPITABLE
