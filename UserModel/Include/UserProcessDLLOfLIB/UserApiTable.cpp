#include "UserApiTable.hpp"
#include "UserApiTable.hpp"
#include <assert.h>

#ifdef Windows
FUNCTION(bool , DEFAULT_CALL , CallNextTable)( PROC *HookApiPROC , PROC *ThisPROC , bool DefaultReturn )
#endif
{
	for( size_t top = 0; top < UserAPIHOOKSize; top++ )
	{
		//�Զ����߼��жϣ��ж���һ��������ַ
	}
	return DefaultReturn;
}