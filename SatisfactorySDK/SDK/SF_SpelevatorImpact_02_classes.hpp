#pragma once

// Satisfactory SDK (V0.1.6 - CL#98445)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SF_SpelevatorImpact_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpelevatorImpact_02.SpelevatorImpact_02_C
// 0x0000 (0x0160 - 0x0160)
class USpelevatorImpact_02_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpelevatorImpact_02.SpelevatorImpact_02_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
