// Fill out your copyright notice in the Description page of Project Settings.


#include "Main.h"
#include "Ball.h"
// Sets default values
AMain::AMain()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMain::BeginPlay()
{
	Super::BeginPlay();
	AMain* Main = GetWorld()->SpawnActor<AMain>(AMain::StaticClass());
	ABall* Ball = GetWorld()->SpawnActor<ABall>(ABall::StaticClass());

}

// Called every frame
void AMain::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

