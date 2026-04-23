// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Porton.generated.h"

class UStaticMeshComponent;
UCLASS()
class ENTREGASPRACTICAS3_API APorton : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APorton();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UStaticMeshComponent> StaticMesh;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int AltaresTotales;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int AltaresActivados;
	
	UFUNCTION(BlueprintCallable)
	void OnAltarActivado();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
