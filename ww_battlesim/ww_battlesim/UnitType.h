#pragma once
#include <string>
#include <map>
class UnitType
{
	std::string name;
	int health;
	float damage;
	float counterDamage;
	std::map<std::string, float> damageModifierVersus;

public:
	std::string GetName();
	int GetHealth();
	float GetDamage(std::string vs);
	float GetCounterDamage(std::string vs);
	UnitType(std::string unitName, int baseHP, int baseDamage, std::map<std::string, float> dmgVersus);
	~UnitType();
};

