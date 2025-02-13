// Satisfactory SDK (V0.1.6 - CL#98445)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_Scrollbox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Scrollbox.Widget_Scrollbox_C.Construct
// ()

void UWidget_Scrollbox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Scrollbox.Widget_Scrollbox_C.Construct");

	UWidget_Scrollbox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Scrollbox.Widget_Scrollbox_C.ExecuteUbergraph_Widget_Scrollbox
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_Scrollbox_C::ExecuteUbergraph_Widget_Scrollbox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Scrollbox.Widget_Scrollbox_C.ExecuteUbergraph_Widget_Scrollbox");

	UWidget_Scrollbox_C_ExecuteUbergraph_Widget_Scrollbox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
