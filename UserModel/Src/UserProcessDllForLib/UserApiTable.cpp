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
		//�Զ����߼��жϣ��ж���һ��������ַ
		if( UserSetHookTable[top].Old = ThisPROC )
		{
			return UserSetHookTable[top].New;
		}
	}
	return NULL;
}