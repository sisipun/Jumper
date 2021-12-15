#include "Booster.h"

ABooster::ABooster()
{
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
}

void ABooster::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABooster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

