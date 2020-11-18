#pragma once
#include <string>
#include <map>
#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
#include <conio.h>
#include <random>
#include <time.h>
#include <cmath>
#include <sstream>
#include <iomanip>
#include <cstdlib>
#include "initialStats.h"

using namespace std;
using namespace std;
using std::chrono::milliseconds;
using std::this_thread::sleep_for;

class Battle;

class Hero
{
public:
	int health, physicalDamage, magicDamage, armor, magicResist, mana;
	double dodgeChance, critChance;
	bool isTurn, isPoisoned, isBurning, isRevealed;
	string name, className, lastActionString;
	void* lastActionFunction(Hero&, Hero&, Battle&);
	//typedef void (*pHeroAction)(Hero&, Hero&, Battle&);
	map<string, void (*)(Hero&, Hero&, Battle&)> heroActions;
	map<string, void (*)(Hero&, Hero&, Battle&)>::iterator it;

	void setAllStats(int health, int physicalDamage, int magicDamage, int armor, int magicRes, double dodgeChance, double critChance);
	void printAllStats();

	Hero();
};

