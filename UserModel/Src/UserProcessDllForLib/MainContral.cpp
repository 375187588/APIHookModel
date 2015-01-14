#include "../../Include/UserProcessDLLOfLIB/MainContral.hpp"

FUNCTION(bool , MainContral::AddHookTable)( PROC SystemHook , PROC UserHook )
{
	if( SystemHook && UserHook )
	{
		this->HookTable[SystemHook].push_back(UserHook);
		return true;
	}
	return false;
}