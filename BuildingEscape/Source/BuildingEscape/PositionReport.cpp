// Fill out your copyright notice in the Description page of Project Settings.

#include "BuildingEscape.h"
#include "PositionReport.h"


// Sets default values for this component's properties
UPositionReport::UPositionReport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	
}


// Called when the game starts
void UPositionReport::BeginPlay()
{
	Super::BeginPlay();

	float ObjectVectorX = GetOwner()->GetTransform().GetLocation().X;
	float ObjectVectorY = GetOwner()->GetTransform().GetLocation().Y;
	float ObjectVectorZ = GetOwner()->GetTransform().GetLocation().Z;

	FString ObjectName = GetOwner()->GetName();
	FString ObjectPos = "X=something, Y=something else, etc";
	UE_LOG(LogTemp, Warning, TEXT("%s is at %f %f %f"), *ObjectName, ObjectVectorX, ObjectVectorY, ObjectVectorZ);
	// output: LogTemp:Warning: SM_Chair_2 is at -320.000000 -120.000000 20.000000

	ObjectName = GetOwner()->GetName();
	ObjectPos = GetOwner()->GetTransform().GetLocation().ToString();
	UE_LOG(LogTemp, Warning, TEXT("%s is at %s"), *ObjectName, *ObjectPos);
	// output: LogTemp:Warning: SM_Chair_2 is at X=-320.000 Y=-120.000 Z=20.000
	
}


// Called every frame
void UPositionReport::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

