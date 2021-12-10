// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "JumpMan_GameMode.generated.h"

/**
 *
 */
UCLASS()
class JUMPER_API AJumpMan_GameMode : public AGameMode
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		TSubclassOf<APawn> Player_Recharge;

	UPROPERTY(EditAnywhere)
		TSubclassOf<APawn> Enemy;

	UPROPERTY(EditAnywhere)
		float Spawn_X_Min;

	UPROPERTY(EditAnywhere)
		float Spawn_X_Max;

	UPROPERTY(EditAnywhere)
		float Spawn_Y_Min;

	UPROPERTY(EditAnywhere)
		float Spawn_Y_Max;

	AJumpMan_GameMode();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	void SpawnPlayerRecharge();
	void SpawnEnemy();

	float Spawn_Z = 500.0f;

private:
	void Spawn(TSubclassOf<APawn> Pawn);
};
