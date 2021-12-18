#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Booster.generated.h"

UCLASS()
class JUMPER_API ABooster : public AActor
{
	GENERATED_BODY()
	
public:	
	ABooster();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		USphereComponent* Collider;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* Mesh;

	UFUNCTION()
		void OnBeginOverlap(
			class UPrimitiveComponent* HitComponent,
			class AActor* OtherActor,
			class UPrimitiveComponent* OtherComponent,
			int32 OtherBodyIndex,
			bool bFromSweep,
			const FHitResult& SweepResult
		);

protected:
	virtual void BeginPlay() override;

};
