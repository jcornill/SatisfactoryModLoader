// Satisfactory SDK (V0.1.6 - CL#98445)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Tutorial_RadarTower_Mail_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tutorial_RadarTower_Mail.Tutorial_RadarTower_Mail_C.Construct
// ()

void UTutorial_RadarTower_Mail_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_RadarTower_Mail.Tutorial_RadarTower_Mail_C.Construct");

	UTutorial_RadarTower_Mail_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_RadarTower_Mail.Tutorial_RadarTower_Mail_C.ExecuteUbergraph_Tutorial_RadarTower_Mail
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_RadarTower_Mail_C::ExecuteUbergraph_Tutorial_RadarTower_Mail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_RadarTower_Mail.Tutorial_RadarTower_Mail_C.ExecuteUbergraph_Tutorial_RadarTower_Mail");

	UTutorial_RadarTower_Mail_C_ExecuteUbergraph_Tutorial_RadarTower_Mail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
