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

UnitType::UnitType(std::string unitName, int baseHP, int baseDamage, int baseRangedDamage, std::map<std::string, float> dmgVersus)
{
	name = unitName;
	health = baseHP;
	damage = baseDamage;
	rangedDamage = baseRangedDamage;
	damageModifierVersus = dmgVersus;
}

UnitType::~UnitType()
{
}
