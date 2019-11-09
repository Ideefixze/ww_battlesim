#include "stdafx.h"
#include "Army.h"
#include <cstdlib>
#include <time.h>


bool Army::AnyMeele()
{
	for (auto i : groups)
	{
		if (i.GetType().IsMeele() && i.isAlive()) return true;
	}

	return false;
}


void Army::AddGroup(UnitGroup group)
{
	groups.push_back(group);
	groupCount++;
}

bool Army::isAlive()
{
	bool alive = false;
	for (auto i : groups)
	{
		if (i.isAlive()) return true;
	}
	return false;
}

void Army::ApplyDamage(int damage)
{
	//groups[0].TakeDamage(100);
	while (damage > 1)
	{
		//std::cout << damage << std::endl;
		for (UnitGroup &i : groups)
		{
			if ((i.isAlive() && i.GetType().IsMeele()) || //Meele units take damage
				(i.isAlive() && i.GetType().IsMeele() == false && AnyMeele() == false)) //Ranged units take damage if all meele are killed
			{
				int overkill = i.TakeDamage(RandomizeDamageTaken(&damage));
				damage = damage + overkill;
			}
			if (damage <= 1 || isAlive() == false) return;
		}

	}
}

void Army::ApplyRangedDamage(int damage)
{
	while (damage > 0)
	{
		for (UnitGroup &i : groups)
		{
			if (i.isAlive())//Ranged units take damage if all meele are killed
			{
				int overkill = i.TakeDamage(RandomizeDamageTaken(&damage));
				damage = damage + overkill;
			}

			if (damage <= 0 || isAlive()==false) return;
			
		}
	}
}

int Army::RandomizeDamageTaken(int * damage)
{
	int max = *damage;
	int randomized = rand() % max;
	*damage = *damage - randomized;
	return randomized;
}

void Army::PrintInfo()
{
	int k = 0;
	for (auto i : groups)
	{
		std::cout << k++ << ". ";
		i.PrintInfo();
	}
}


Army::Army()
{
}


Army::~Army()
{
}
