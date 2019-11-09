#include "stdafx.h"
#include "UnitType.h"


std::string UnitType::GetName()
{
	return name;
}

int UnitType::GetHealth()
{
	return health;
}

float UnitType::GetDamage()
{
	return damage;
}

float UnitType::GetRangedDamage()
{
	return rangedDamage;
}

bool UnitType::IsMeele()
{
	return isMeele;
}

UnitType::UnitType(std::string unitName, int baseHP, int baseDamage, int baseRangedDamage, bool meele)
{
	name = unitName;
	health = baseHP;
	damage = baseDamage;
	rangedDamage = baseRangedDamage;
	isMeele = meele;
}

UnitType::UnitType()
{

}

UnitType::~UnitType()
{
}
