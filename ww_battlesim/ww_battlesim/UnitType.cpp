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

float UnitType::GetDamage(std::string vs)
{
	return damageModifierVersus[vs]*damage;
}

float UnitType::GetCounterDamage(std::string vs)
{
	return counterDamage*GetDamage(vs);
}

UnitType::UnitType(std::string unitName, int baseHP, int baseDamage, std::map<std::string, float> dmgVersus)
{
	name = unitName;
	health = baseHP;
	damage = baseDamage;
	damageModifierVersus = dmgVersus;
}

UnitType::~UnitType()
{
}
