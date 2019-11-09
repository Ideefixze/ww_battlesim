// ww_battlesim.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include "stdafx.h"
#include "BattleSimulation.h"


int main()
{
	srand(time(NULL));

	UnitType a("Archers", 15, 0, 1, false);
	UnitType b("Warriors", 30, 4, 0, true);
	UnitType c("MenAtArms", 50, 7, 0, true);

	UnitGroup aa(100, a);
	UnitGroup bb(40, b);
	UnitGroup cc(4, c);


	Army testArmy;
	testArmy.AddGroup(aa);
	testArmy.AddGroup(bb);
	testArmy.AddGroup(cc);

	testArmy.PrintInfo();

	testArmy.ApplyDamage(100);

	testArmy.PrintInfo();

	system("pause");



    return 0;
}

