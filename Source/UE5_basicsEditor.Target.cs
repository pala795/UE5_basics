// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class UE5_basicsEditorTarget : TargetRules
{
	public UE5_basicsEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5; // Usa V4 o V5 in base alla tua versione di UE
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		ExtraModuleNames.Add("UE5_basics");
		
		bOverrideBuildEnvironment = true;
	}
}
