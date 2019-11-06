#pragma once
#include <string>
#include <map>
class UnitType
{
	std::string name;
	int health;
	float damage;
	float rangedDamage;
	std::map<std::string, float> damageModifierVersus;

public:
	std::string GetName();
	int GetHealth();
	float GetDamage();
	float GetRangedDamage();
	UnitType(std::string unitName, int baseHP, int baseDamage, int rangedDamage, std::map<std::string, float> dmgVersus);
	~UnitType();
};

