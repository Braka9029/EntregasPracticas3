// Fill out your copyright notice in the Description page of Project Settings.


#include "TP2/Porton.h"

#include "Kismet/GameplayStatics.h"
#include "TP2/ActivablesComponent.h"
#include "TP2/Altar.h"
#include "WorldPartition/HLOD/HLODActor.h"



// Sets default values
APorton::APorton()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
}

void APorton::OnAltarActivado()
{
	AltaresActivados++;
	if (AltaresActivados == AltaresTotales)
	{
		GEngine->AddOnScreenDebugMessage(-1,2.0f, FColor::Yellow,TEXT("TODOS LOS ALTARES ACTIVADOS"));
		Destroy();
	}
}

// Called when the game starts or when spawned
void APorton::BeginPlay()
{
	//cuantos altares hay instanciados
	Super::BeginPlay();
	TArray<AActor*> Actors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAltar::StaticClass(), Actors);
	for (AActor* Actor : Actors)
	{
		AAltar* Altar = Cast<AAltar>(Actor);
		if (UActivablesComponent* Comp = Altar->FindComponentByClass<UActivablesComponent>())
		{
			Comp->OnActivacion.AddDynamic(this, &APorton::OnAltarActivado);
		}
	}
	AltaresTotales = Actors.Num();
	GEngine->AddOnScreenDebugMessage(-1,2.0f, FColor::Yellow,FString::Printf(TEXT("AltaresTotales: %d"), AltaresTotales));
}

// Called every frame
void APorton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

