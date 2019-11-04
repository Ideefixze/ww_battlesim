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
	float GetTotalDamageVersus(UnitType target);
	float GetTotalCounterDamageVersus(UnitType target);
	void Bombard(UnitGroup* target);
	void MeleeAttack(UnitGroup* target);
	void TakeDamage(float damage);
	UnitGroup(int count, UnitType type);
	~UnitGroup();
};

