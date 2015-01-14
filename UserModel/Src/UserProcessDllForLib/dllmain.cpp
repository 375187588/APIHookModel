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
			//设置当前表项
			UserAPIHOOKSet *ThisTable = UserSetHookTable;
			//自动机逻辑操作，执行拦截函数表的检查和修正
			while( ( ( *( ThisTable ) ).New == NULL ) || ( ( *( ThisTable ) ).Old == NULL ) )
			{
				ThisTable++;
			}
			//复位
			ThisTable = UserSetHookTable;
			//执行拦截操作
			while( ( ( *( ThisTable ) ).New == NULL ) || ( ( *( ThisTable ) ).Old == NULL ) )
			{
				if( fdwReason == DLL_PROCESS_ATTACH )
				{
					//加载DLL
				}
				else if( fdwReason == DLL_PROCESS_DETACH )
				{
					//释放DLL
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