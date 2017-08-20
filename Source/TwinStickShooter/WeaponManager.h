// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

/**
 * 
 */

UENUM(BlueprintType)
enum class EWeapons : uint8
{
	Weapon_N	UMETA(DisplayName = "N"),
	Weapon_Boom UMETA(DisplayName = "Boom")
};

class TWINSTICKSHOOTER_API WeaponManager
{
public:
	WeaponManager();
	~WeaponManager();

public:
	EWeapons SelectedWeapon;
};
