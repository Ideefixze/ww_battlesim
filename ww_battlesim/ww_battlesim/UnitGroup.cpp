#include "stdafx.h"
#include "UnitGroup.h"


bool UnitGroup::isAlive()
{
	return alive;
}

int UnitGroup::GetGroupHealth()
{
	return groupHealth;
}

UnitType UnitGroup::GetType()
{
	return type;
}

int UnitGroup::GetTotalDamage()
{
	return type.GetDamage()*count;
}

int UnitGroup::GetTotalRangedDamage()
{
	return type.GetRangedDamage()*count;
}

int UnitGroup::TakeDamage(float damage)
{
	groupHealth -= damage;
	if (groupHealth <= 0)
	{
		alive = false;
		int overkill = -groupHealth;
		groupHealth = 0;
		count = 0;

		return overkill; //surplus damage
	}

	count = groupHealth/type.GetHealth();

	
}

UnitGroup::UnitGroup(int c, UnitType t)
{
	count = c;
	type = t;

	groupHealth = count * type.GetHealth();
}

UnitGroup::~UnitGroup()
{
}
