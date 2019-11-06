#pragma once
#include "UnitType.h"
class UnitGroup
{
	int count;
	UnitType type;

	bool alive = true;

	int groupHealth;
public:
	bool isAlive();
	int GetGroupHealth();
	UnitType GetType();
	int GetTotalDamage();
	int GetTotalRangedDamage();

	int TakeDamage(float damage);
	UnitGroup(int count, UnitType type);
	~UnitGroup();
};

