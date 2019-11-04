#include "stdafx.h"
#include "Army.h"


UnitGroup Army::GetCurrentGroup()
{
	return groups[activeGroup];
}

void Army::NextGroup()
{
	activeGroup = (activeGroup + 1) % groupCount;

	if (groups[activeGroup].isAlive() == false)
		NextGroup();
}

void Army::AddGroup(UnitGroup group)
{
	groups.push_back(group);
	groupCount++;
}

bool Army::isAlive()
{
	bool alive = false;
	for (auto i : groups)
	{
		if (i.isAlive()) return true;
	}
	return false;
}

Army::Army()
{
}


Army::~Army()
{
}
