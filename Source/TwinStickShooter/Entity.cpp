// Fill out your copyright notice in the Description page of Project Settings.

#include "TwinStickShooter.h"
#include "Entity.h"


// Sets default values
AEntity::AEntity()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEntity::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEntity::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AEntity::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

// Implement CalculateHealth()
void AEntity::CalculateHealth(float delta)
{
	Health += delta;
	CalculateDeath();
}

// Implement CalculateDead()
void AEntity::CalculateDeath()
{
	if (Health > 0) return; // IsDead = false;

	IsDead = true;
}

// Implement PostEditChangeProperty()
#if WITH_EDITOR
void AEntity::PostEditChangeProperty(FPropertyChangedEvent& propertyChangedEvent)
{
	IsDead = false;
	Health = 100.f;

	Super::PostEditChangeProperty(propertyChangedEvent);

	CalculateDeath();
}
#endif

// Implement CalculateSprint()
void AEntity::CalculateSprint(float delta)
{
	Sprint += delta;
}