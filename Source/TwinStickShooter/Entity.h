// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "Entity.generated.h"

UCLASS()
class TWINSTICKSHOOTER_API AEntity : public ACharacter
{
	GENERATED_BODY(Blueprintable)

public:
	// Make a health property
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Entity")
		float Health = 100.f;

	// Calculate health function
	UFUNCTION(BlueprintCallable, Category = "Entity")
		virtual void CalculateHealth(float delta);

	// Make an is dead property
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Entity")
		bool IsDead = false;

	// Calculate death function
	virtual void CalculateDeath();

	// How much sprint the player has left
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Entity")
		float Sprint = 100.f;

	// Calculate sprint function
	UFUNCTION(BlueprintCallable, Category = "Entity")
		virtual void CalculateSprint(float delta);

	// Make an is reloading property
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Entity")
		bool IsReloading = false;

#if WITH_EDITOR
	// Editor centric code for changing properties
	virtual void PostEditChangeProperty(FPropertyChangedEvent& propertyChangedEvent) override;
#endif

public:
	// Sets default values for this character's properties
	AEntity();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};