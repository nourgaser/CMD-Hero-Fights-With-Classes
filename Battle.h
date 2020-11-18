#pragma once
#include "Hero.h"

class Battle
{
public:
	int turn;
	vector<string> battleLog = { "NULL - Turn One" };
	void takeTurn(Hero&, Hero&);

	Battle(Hero&, Hero&);
};

