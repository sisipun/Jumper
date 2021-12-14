#include "JumpMan_GameMode.h"
#include "GameFramework/Actor.h"


AJumpMan_GameMode::AJumpMan_GameMode()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AJumpMan_GameMode::BeginPlay()
{
	Super::BeginPlay();
}

void AJumpMan_GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
