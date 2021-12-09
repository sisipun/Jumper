// Fill out your copyright notice in the Description page of Project Settings.


#include "JumpMan_GameMode.h"
#include "GameFramework/Actor.h"


AJumpMan_GameMode::AJumpMan_GameMode()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AJumpMan_GameMode::BeginPlay()
{
	Super::BeginPlay();
	FTimerHandle RestartHandle;
	GetWorldTimerManager().SetTimer(RestartHandle, this, &AJumpMan_GameMode::SpawnPlayerRacharge, FMath::RandRange(2, 5), true);
}

void AJumpMan_GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AJumpMan_GameMode::SpawnPlayerRacharge()
{

	float RandX = FMath::RandRange(Spawn_X_Min, Spawn_X_Max);
	float RandY = FMath::RandRange(Spawn_Y_Min, Spawn_Y_Max);

	FVector SpawnPosition = FVector(RandX, RandY, Spawn_Z);
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);

	GetWorld()->SpawnActor(Player_Recharge, &SpawnPosition, &SpawnRotation);

}
