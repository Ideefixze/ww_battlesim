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

int UnitGroup::GetCount()
{
	return count;
}

int UnitGroup::TakeDamage(int damage)
{
	//std::cout << GetType().GetName() << " take " << damage << " damage!" << std::endl;
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
	//std::cout << GetType().GetName() << " count: " << count << "!" << std::endl;

	return 0;

	
}

UnitGroup::UnitGroup(int c, UnitType t)
{
	count = c;
	type = t;

	groupHealth = count * type.GetHealth();
}

void UnitGroup::PrintInfo()
{
	std::cout << GetType().GetName() << " " << count << std::endl;//" ("<<GetType().GetHealth()<< " HP, "<< GetType().GetDamage() <<" DMG, "<<GetType().GetRangedDamage()<<" R_DMG )" << std::endl;
}

UnitGroup::~UnitGroup()
{
}
