// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EntregasPracticas3 : ModuleRules
{
	public EntregasPracticas3(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"EntregasPracticas3",
			"EntregasPracticas3/Variant_Platforming",
			"EntregasPracticas3/Variant_Platforming/Animation",
			"EntregasPracticas3/Variant_Combat",
			"EntregasPracticas3/Variant_Combat/AI",
			"EntregasPracticas3/Variant_Combat/Animation",
			"EntregasPracticas3/Variant_Combat/Gameplay",
			"EntregasPracticas3/Variant_Combat/Interfaces",
			"EntregasPracticas3/Variant_Combat/UI",
			"EntregasPracticas3/Variant_SideScrolling",
			"EntregasPracticas3/Variant_SideScrolling/AI",
			"EntregasPracticas3/Variant_SideScrolling/Gameplay",
			"EntregasPracticas3/Variant_SideScrolling/Interfaces",
			"EntregasPracticas3/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
