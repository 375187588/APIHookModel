#include "UserApiTable.hpp"
#include "UserApiTable.hpp"
#include <assert.h>

#ifdef Windows
FUNCTION(bool , DEFAULT_CALL , CallNextTable)( PROC *HookApiPROC , PROC *ThisPROC , bool DefaultReturn )
#endif
{
	for( size_t top = 0; top < UserAPIHOOKSize; top++ )
	{
		//自动机逻辑判断，判断下一个函数地址
	}
	return DefaultReturn;
}