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

float UnitGroup::GetTotalDamageVersus(UnitType target)
{
	return type.GetDamage(target.GetName())*count;
}

float UnitGroup::GetTotalCounterDamageVersus(UnitType target)
{
	return type.GetCounterDamage(target.GetName())*count;
}

void UnitGroup::Bombard(UnitGroup* target) 
{
	target->TakeDamage(GetTotalDamageVersus(target->GetType()));
}

void UnitGroup::MeleeAttack(UnitGroup* target)
{
	target->Bombard(this);
	Bombard(target);
}

void UnitGroup::TakeDamage(float damage)
{
	groupHealth -= damage;
	if (groupHealth <= 0)
	{
		alive = false;
		groupHealth = 0;
		count = 0;
		return;
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
