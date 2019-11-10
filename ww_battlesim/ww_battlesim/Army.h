#pragma once
#include "UnitGroup.h"
#include <vector>
#include <cstdlib>
#include <ctime>
class Army
{
	int activeGroup = 0;
	int groupCount = 0;
	std::vector<UnitGroup> groups;
	std::string armyName;

public:
	
	bool AnyMeele();
	void AddGroup(UnitGroup group);
	bool isAlive();
	void ApplyRangedDamage(int damage);
	void ApplyDamage(int damage);
	static int RandomizeDamageTaken(int* damage);
	static float ThrowDice(int min, int max);
	void PrintInfo();
	int GetTotalMeeleDamage();
	int GetTotalRangedDamage();
	Army(std::string name);
	~Army();
};

