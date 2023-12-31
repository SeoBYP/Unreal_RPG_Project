 // © 2022 Hyper, all rights reserved


#include "Item.h"
#include "RPG_Project/DebugMacros.h"

// Debug DRAW_SPHERE 매크로
//#define DRAW_SPHERE(Location) if(GetWorld()) DrawDebugSphere(GetWorld(),Location,25.0f,12,FColor::Red,true);
// 
// 
// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Begin play Called!"));
	
	if (GEngine) 
	{
		GEngine->AddOnScreenDebugMessage(1, 60.0f,FColor::Cyan,FString("Item OnScreen Message"));
	}

	UWorld* world = GetWorld();
	FVector location = GetActorLocation();
	FVector Forward = GetActorForwardVector();
	//if (world) 
	//{

	//	DrawDebugLine(world, location, location + Forward * 100.0f, FColor::Red, true,-1,0,1.f);
	//}

	DRAW_SPHERE(location);
	//DRAW_LINE(location, location + Forward * 100.0f);
	//DRAW_POINT(location + Forward * 100.0);
	DRAW_VECTOR(location, location + Forward * 100.0f);

	//if (world) {
	//	DrawDebugPoint(world, location + Forward * 100.0f, 15.0f, FColor::Red, true);
	//}

	//UWorld* world = GetWorld();
	//if (world) 
	//{
	//	FVector location = GetActorLocation();
	//	DrawDebugSphere(world, location, 25, THIRTY, FColor::Red, true,30.0f);
	//}

}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//디버깅 스트링 포맷
	//UE_LOG(LogTemp, Warning, TEXT("DeltaTime : %f"), DeltaTime);
	//if (GEngine)
	//{
	//	FString Name = GetName();
	//	//FString Message = FString::Printf(TEXT("DeltaTime : %f"), DeltaTime);
	//	FString Message = FString::Printf(TEXT("Item Name : %s"), *Name);
	//	GEngine->AddOnScreenDebugMessage(1, 60.0f, FColor::Cyan, Message);
	//}
}

