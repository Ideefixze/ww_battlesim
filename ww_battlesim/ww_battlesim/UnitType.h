#pragma once
#include <string>
#include <map>
class UnitType
{
	std::string name;
	int health;
	float damage;
	float rangedDamage;
	bool isMeele = true;
	std::map<std::string, float> damageModifierVersus;

public:
	std::string GetName();
	int GetHealth();
	float GetDamage();
	float GetRangedDamage();
	bool IsMeele();
	UnitType(std::string unitName, int baseHP, int baseDamage, int rangedDamage, bool meele);
	UnitType();
	~UnitType();
};

