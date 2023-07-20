// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CourseGame : ModuleRules
{
	public CourseGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
