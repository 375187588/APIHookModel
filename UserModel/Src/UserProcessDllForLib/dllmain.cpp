#include "../../Include/ApiHook.h"
#include <assert.h>
#ifdef Windows
#include <windows.h>
#endif // Windows

UserAPIHOOKSet *UserSetHookTable = NULL;
size_t UserAPIHOOKSize = 0;

#ifdef Windows
#ifdef __cplusplus
extern "C"
{
#endif
	BOOL WINAPI DllMain(HINSTANCE hinstDLL , DWORD fdwReason , LPVOID lpReserved)
	{
		if( UserSetHookTable )
		{
			assert(UserAPIHOOKSize);
			for( size_t TopTable = 0; TopTable < UserAPIHOOKSize; TopTable++ )
			{
				UserAPIHOOKSet *pUserAPIHOOKTableTop = &( UserSetHookTable[TopTable] );
				assert(pUserAPIHOOKTableTop = ( &UserSetHookTable[TopTable] ));
				if( fdwReason == DLL_PROCESS_ATTACH )
				{
					//¼ÓÔØDLL
				}
				else if( fdwReason == DLL_PROCESS_DETACH )
				{
					//ÊÍ·ÅDLL
				}
			}
		}
		
		return TRUE;
	}
#ifdef __cplusplus
}
#endif
#endif  // Windows