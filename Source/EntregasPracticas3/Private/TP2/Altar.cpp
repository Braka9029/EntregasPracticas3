// Fill out your copyright notice in the Description page of Project Settings.


#include "TP2/Altar.h"

#include "Components/SphereComponent.h"
#include "TP2/ActivablesComponent.h"


// Sets default values
AAltar::AAltar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	RootComponent = Sphere;
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	ActivablesComponent = CreateDefaultSubobject<UActivablesComponent>(TEXT("ActivablesComponent"));
	
	StaticMesh->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AAltar::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAltar::Interact_Implementation(AActor* Actor)
{
	//IInteractInterface::Interact_Implementation(Actor); INICIAMOS LA ACTIVACION
	if (IsValid(ActivablesComponent))
	{
		GEngine->AddOnScreenDebugMessage(-1,2.0f, FColor::Yellow,TEXT("SI"));
		ActivablesComponent->EmpezarActivacion();
	}
	//IInteractInterface::Execute_Interact(Actor);
}

// Called every frame
void AAltar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

