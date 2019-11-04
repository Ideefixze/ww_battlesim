#pragma once
#include "UnitGroup.h"
#include <vector>
class Army
{
	int activeGroup = 0;
	int groupCount = 0;
	std::vector<UnitGroup> groups;

public:
	UnitGroup GetCurrentGroup();
	void NextGroup();
	void AddGroup(UnitGroup group);
	bool isAlive();
	Army();
	~Army();
};

