#pragma once
#include "Army.h"
class BattleSimulation
{
	Army armyA;
	Army armyB;
public:
	BattleSimulation(Army a, Army b);
	~BattleSimulation();
};

