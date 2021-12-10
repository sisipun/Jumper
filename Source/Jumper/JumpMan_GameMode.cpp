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
	FTimerHandle SpawnRechargeHandle;
	GetWorldTimerManager().SetTimer(SpawnRechargeHandle, this, &AJumpMan_GameMode::SpawnPlayerRecharge, FMath::RandRange(2, 5), true);
	FTimerHandle SpawnEnemyHandle;
	GetWorldTimerManager().SetTimer(SpawnEnemyHandle, this, &AJumpMan_GameMode::SpawnEnemy, FMath::RandRange(7, 10), true);
}

void AJumpMan_GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AJumpMan_GameMode::SpawnPlayerRecharge()
{
	Spawn(Player_Recharge);
}

void AJumpMan_GameMode::SpawnEnemy()
{
	Spawn(Enemy);
}

void AJumpMan_GameMode::Spawn(TSubclassOf<APawn> Pawn)
{
	float RandX = FMath::RandRange(Spawn_X_Min, Spawn_X_Max);
	float RandY = FMath::RandRange(Spawn_Y_Min, Spawn_Y_Max);

	FVector SpawnPosition = FVector(RandX, RandY, Spawn_Z);
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);

	GetWorld()->SpawnActor(Pawn, &SpawnPosition, &SpawnRotation);
}
