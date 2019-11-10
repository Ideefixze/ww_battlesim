#include "stdafx.h"
#include "BattleSimulation.h"


BattleSimulation::BattleSimulation(Army a, Army b) : armyA(""), armyB("")
{
	armyA = a;
	armyB = b;
}

void BattleSimulation::SimulateTurn()
{
	armyB.ApplyRangedDamage(armyA.GetTotalRangedDamage()*Army::ThrowDice(1, 6));
	armyA.ApplyDamage(armyB.GetTotalMeeleDamage()*Army::ThrowDice(1, 6));
	armyB.ApplyDamage(armyA.GetTotalMeeleDamage()*Army::ThrowDice(1, 6));
	armyA.ApplyRangedDamage(armyB.GetTotalRangedDamage()*Army::ThrowDice(1, 6));
	
}

void BattleSimulation::SimulateBattle(bool showSteps)
{
	std::cout << "The battle starts!\n" << std::endl;
	armyA.PrintInfo();
	std::cout << "---------------------\n";
	armyB.PrintInfo();
	std::cout << "---------------------\n";

	while (armyA.isAlive() && armyB.isAlive())
	{
		if (showSteps)
		{
			armyA.PrintInfo();
			std::cout << "---------------------\n";
			armyB.PrintInfo();
			std::cout << "---------------------\n";	
			
		}

		SimulateTurn();

		Sleep(1000);
		system("cls");
		
	}
	std::cout << "\n\n Post-battle report:" << std::endl;
	armyA.PrintInfo();
	std::cout << "---------------------\n";
	armyB.PrintInfo();
	std::cout << "---------------------\n";
}


BattleSimulation::~BattleSimulation()
{
}
