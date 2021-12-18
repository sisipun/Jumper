#include "Booster.h"

ABooster::ABooster()
{
	Collider = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	Collider->SetupAttachment(RootComponent);
	Mesh->SetupAttachment(Collider);
}

void ABooster::BeginPlay()
{
	Super::BeginPlay();

	Collider->OnComponentBeginOverlap.AddDynamic(this, &ABooster::OnBeginOverlap);
}

void ABooster::OnBeginOverlap(
	class UPrimitiveComponent* HitComponent,
	class AActor* OtherActor,
	class UPrimitiveComponent* OtherComponent,
	int32 OtherBodyIndex,
	bool bFromSweep,
	const FHitResult& SweepResult
)
{
}

