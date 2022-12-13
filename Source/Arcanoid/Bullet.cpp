// Fill out your copyright notice in the Description page of Project Settings.
                                                                          

#include "Bullet.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    if(!CollisionComponent)
    {
       
        CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
      
        CollisionComponent->InitSphereRadius(15.0f);
        RootComponent = CollisionComponent;
    }

    if(!ProjectileMovementComponent)
    {
      
        ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
        ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
        ProjectileMovementComponent->SetConstraintMode(EDOFMode::XZPlane);        
    }
}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();	
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

