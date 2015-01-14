#include "UserApiTable.hpp"
#include "UserApiTable.hpp"
#include <assert.h>
#include <varargs.h>

#ifdef Windows
FUNCTION(PROC , DEFAULT_CALL , GetNextTable)( PROC ThisPROC )
#endif
{
	for( size_t top = 0; top < UserAPIHOOKSize; top++ )
	{
		//自动机逻辑判断，判断下一个函数地址
		if( UserSetHookTable[top].Old = ThisPROC )
		{
			return UserSetHookTable[top].New;
		}
	}
	return NULL;
}