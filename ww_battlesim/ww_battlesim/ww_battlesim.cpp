// ww_battlesim.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include "stdafx.h"
#include "BattleSimulation.h"


int main()
{
	srand(time(NULL));

	UnitType a("Archers", 20, 0, 1, false);
	UnitType b("Warriors", 30, 2, 0, true);
	UnitType c("MenAtArms", 75, 10, 0, true);

	UnitGroup aa(1000, a);
	UnitGroup bb(500, b);
	UnitGroup cc(500, c);


	Army testArmy("Stannis' Army");
	Army testArmy2("This Bitch Daenerys' Army");
	
	testArmy.AddGroup(bb);
	testArmy.AddGroup(cc);
	testArmy.AddGroup(aa);

	testArmy2.AddGroup(bb);
	testArmy2.AddGroup(cc);
	testArmy2.AddGroup(aa);

	//testArmy.PrintInfo();
	std::cout << "\n";
	BattleSimulation sim(testArmy, testArmy2);
	sim.SimulateBattle(true);

	//testArmy.ApplyDamage(5000);

	std::cout << "\n";

	//testArmy.PrintInfo();


	system("pause");



    return 0;
}

