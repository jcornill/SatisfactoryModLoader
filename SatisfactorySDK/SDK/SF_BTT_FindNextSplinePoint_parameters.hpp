#pragma once

// Satisfactory SDK (V0.1.6 - CL#98445)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_BTT_FindNextSplinePoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTT_FindNextSplinePoint.BTT_FindNextSplinePoint_C.ReceiveExecuteAI
struct UBTT_FindNextSplinePoint_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTT_FindNextSplinePoint.BTT_FindNextSplinePoint_C.ExecuteUbergraph_BTT_FindNextSplinePoint
struct UBTT_FindNextSplinePoint_C_ExecuteUbergraph_BTT_FindNextSplinePoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
