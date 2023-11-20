// © 2022 Hyper, all rights reserved

using UnrealBuildTool;
using System.Collections.Generic;

public class RPG_ProjectTarget : TargetRules
{
	public RPG_ProjectTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "RPG_Project" } );
	}
}
