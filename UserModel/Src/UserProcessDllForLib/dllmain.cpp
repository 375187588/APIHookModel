#include "../../Include/ApiHook.h"
#include <assert.h>
#ifdef Windows
#include <windows.h>
#endif // Windows

extern UserAPIHOOKSet UserSetHookTable[];

#ifdef Windows
#ifdef __cplusplus
extern "C"
{
#endif
	BOOL WINAPI DllMain(HINSTANCE hinstDLL , DWORD fdwReason , LPVOID lpReserved)
	{
		if( UserSetHookTable )
		{
			//���õ�ǰ����
			UserAPIHOOKSet *ThisTable = UserSetHookTable;
			//�Զ����߼�������ִ�����غ�����ļ�������
			while( ( ( *( ThisTable ) ).New == NULL ) || ( ( *( ThisTable ) ).Old == NULL ) )
			{
				ThisTable++;
			}
			//��λ
			ThisTable = UserSetHookTable;
			//ִ�����ز���
			while( ( ( *( ThisTable ) ).New == NULL ) || ( ( *( ThisTable ) ).Old == NULL ) )
			{
				if( fdwReason == DLL_PROCESS_ATTACH )
				{
					//����DLL
				}
				else if( fdwReason == DLL_PROCESS_DETACH )
				{
					//�ͷ�DLL
				}
				ThisTable++;
			}
		}
		
		return TRUE;
	}
#ifdef __cplusplus
}
#endif
#endif  // Windows