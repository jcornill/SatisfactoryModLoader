// Satisfactory SDK (V0.1.6 - CL#98445)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Widget_RewardMap_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_RewardMap.Widget_RewardMap_C.IsValidRewardItem
// ()
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWidget_RewardMap_C::IsValidRewardItem(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RewardMap.Widget_RewardMap_C.IsValidRewardItem");

	UWidget_RewardMap_C_IsValidRewardItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Widget_RewardMap.Widget_RewardMap_C.UpdateVisibility
// ()

void UWidget_RewardMap_C::UpdateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RewardMap.Widget_RewardMap_C.UpdateVisibility");

	UWidget_RewardMap_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RewardMap.Widget_RewardMap_C.PreConstruct
// ()
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_RewardMap_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RewardMap.Widget_RewardMap_C.PreConstruct");

	UWidget_RewardMap_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RewardMap.Widget_RewardMap_C.Construct
// ()

void UWidget_RewardMap_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RewardMap.Widget_RewardMap_C.Construct");

	UWidget_RewardMap_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RewardMap.Widget_RewardMap_C.OnRewardClicked
// ()

void UWidget_RewardMap_C::OnRewardClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RewardMap.Widget_RewardMap_C.OnRewardClicked");

	UWidget_RewardMap_C_OnRewardClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_RewardMap.Widget_RewardMap_C.ExecuteUbergraph_Widget_RewardMap
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_RewardMap_C::ExecuteUbergraph_Widget_RewardMap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RewardMap.Widget_RewardMap_C.ExecuteUbergraph_Widget_RewardMap");

	UWidget_RewardMap_C_ExecuteUbergraph_Widget_RewardMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
