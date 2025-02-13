#pragma once
#include <tuple>
#include <string>
#include <iostream>
#include <filesystem>
#include <Windows.h>
#include <mod/ModHandler.h>

namespace SML {
	static const std::string modLoaderVersion = "1.0.0-pr4"; // SML's version
	static const std::string targetVersion[] = { "99427", "98994" }; //CLs of Satisfactory, 1st is normal CL and 2nd is experimental CL
	static bool loadConsole = true;
	static bool debugOutput = false;
	static bool supressErrors = false;

	extern Mod::ModHandler modHandler;

	void mod_loader_entry();
	void read_config();
	void cleanup();
}