#pragma once

// Satisfactory SDK (V0.1.6 - CL#98445)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_Ambient_Settings_Crater_Lake_Atmos_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ambient_Settings_Crater_Lake_Atmos.Ambient_Settings_Crater_Lake_Atmos_C
// 0x0000 (0x0050 - 0x0050)
class UAmbient_Settings_Crater_Lake_Atmos_C : public UFGAmbientSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ambient_Settings_Crater_Lake_Atmos.Ambient_Settings_Crater_Lake_Atmos_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
