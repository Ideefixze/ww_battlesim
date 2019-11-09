#pragma once
#include "UnitType.h"
#include <iostream>
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
	int GetCount();

	int TakeDamage(int damage);
	UnitGroup(int count, UnitType type);
	void PrintInfo();
	~UnitGroup();
};

