#include "../../Include/UserProcessDLLOfLIB/UserApiTable.hpp"
#include <assert.h>
#include <varargs.h>

#ifdef Windows
FUNCTION(PROC , DEFAULT_CALL , GetNextTable)( PROC ThisPROC )
#endif
{
	UserAPIHOOKSet *ThisTable = UserSetHookTable;
	while( ( ( *( ThisTable ) ).New == NULL ) || ( ( *( ThisTable ) ).Old == NULL ) )
	{
		//�Զ����߼��жϣ��ж���һ��������ַ
		if( ( *( ThisTable ) ).Old = ThisPROC )
		{
			return ( *( ThisTable ) ).New;
		}
		ThisTable++;
	}
	return NULL;
}