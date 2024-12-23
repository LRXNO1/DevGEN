// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class minimap_test : ModuleRules
{
	public minimap_test(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
