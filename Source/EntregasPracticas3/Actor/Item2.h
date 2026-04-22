// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item2.generated.h"

UCLASS()
class ENTREGASPRACTICAS3_API AItem2 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem2();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Props")
	int salud;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Props")
	int armadura;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Props")
	int distancia;
		

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
