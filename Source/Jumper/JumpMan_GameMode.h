#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "JumpMan_GameMode.generated.h"

UCLASS()
class JUMPER_API AJumpMan_GameMode : public AGameMode
{
	GENERATED_BODY()

public:

	AJumpMan_GameMode();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
};
