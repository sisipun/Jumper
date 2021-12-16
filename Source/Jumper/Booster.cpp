#include "Booster.h"

ABooster::ABooster()
{
	PrimaryActorTick.bCanEverTick = true;

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

void ABooster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
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

