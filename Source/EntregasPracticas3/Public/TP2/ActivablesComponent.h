// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActivablesComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FActivablesComponentDelegate);
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class ENTREGASPRACTICAS3_API UActivablesComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UActivablesComponent();
	UFUNCTION(BlueprintCallable)
	void EmpezarActivacion();
	
	UFUNCTION(BlueprintCallable)
	void FinalizarActivacion();
	
	UPROPERTY(BlueprintReadWrite)
	bool bActivado = false;
	
	UPROPERTY(BlueprintReadWrite)
	FTimerHandle TimerHandle;
	
	UPROPERTY(BlueprintAssignable)
	FActivablesComponentDelegate OnActivacion;
	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
};
