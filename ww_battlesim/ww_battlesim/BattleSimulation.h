#pragma once
#include "Army.h"
#include <Windows.h>
class BattleSimulation
{
	Army armyA;
	Army armyB;
public:
	BattleSimulation(Army a, Army b);
	void SimulateTurn();
	~BattleSimulation();
};

