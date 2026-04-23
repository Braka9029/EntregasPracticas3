// Fill out your copyright notice in the Description page of Project Settings.


#include "TP2/ActivablesComponent.h"


// Sets default values for this component's properties
UActivablesComponent::UActivablesComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UActivablesComponent::EmpezarActivacion()
{
	if (!bActivado)
	{
		bActivado = true;
		GEngine->AddOnScreenDebugMessage(-1,2.0f, FColor::Red,TEXT("Activando Altar"));
		//
		GetWorld()->GetTimerManager().SetTimer(TimerHandle,this,&UActivablesComponent::FinalizarActivacion,2.0f,false);
	}
}

void UActivablesComponent::FinalizarActivacion()
{
	GEngine->AddOnScreenDebugMessage(-1,2.0f, FColor::Green,TEXT("Altar Activado"));
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	OnActivacion.Broadcast();
}


// Called when the game starts
void UActivablesComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UActivablesComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                         FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

