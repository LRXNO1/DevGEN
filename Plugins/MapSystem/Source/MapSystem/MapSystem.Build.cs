// Copyright 2024 MeRoMoN. All Rights Reserved.

using UnrealBuildTool;

public class MapSystem : ModuleRules
{
	public MapSystem(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;		
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
                "UMG",
                "NavigationSystem",
                "InputCore"
            }
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore"
			}
			);
		
	}
}
