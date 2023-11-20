// © 2022 Hyper, all rights reserved

using UnrealBuildTool;
using System.Collections.Generic;

public class RPG_ProjectEditorTarget : TargetRules
{
	public RPG_ProjectEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "RPG_Project" } );
	}
}
