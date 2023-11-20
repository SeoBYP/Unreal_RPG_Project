#pragma once

#include "DrawDebugHelpers.h"

// Debug DRAW_SPHERE 매크로
#define DRAW_SPHERE(Location) if(GetWorld()) DrawDebugSphere(GetWorld(),Location,25.0f,12,FColor::Red,true);
// Debug DRAW_LINE 매크로
#define DRAW_LINE(StartLocation,EndLocation) if(GetWorld()) DrawDebugLine(GetWorld(), StartLocation,EndLocation,FColor::Red,true,-1.f,0,1.f);
// Debug DRAW_POINT 매크로
#define DRAW_POINT(Location) if(GetWorld()) DrawDebugPoint(world, Location, 15.0f, FColor::Red, true);
// Debug DRAW_VECTOR 매크로
#define DRAW_VECTOR(StartLocation,EndLocation) if(GetWorld()) \
	{\
		DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, true, -1.f, 0, 1.f); \
		DrawDebugPoint(world, EndLocation, 15.0f, FColor::Red, true); \
	}