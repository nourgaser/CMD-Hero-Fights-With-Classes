#include "Warrior.h"

Warrior::Warrior(string name)
{
	this->heroActions["/swing_sword"] = &swingSword;
	this->heroActions["/swing_sword_hard"] = &swingSwordHard;
	this->it = this->heroActions.begin();
	this->className = "Warrior";

	canCharge = true;
	this->name = name;
	setAllStats(WARRIOR_MAX_HP, WARRIOR_PHYSICAL_DAMAGE, WARRIOR_MAGIC_DAMAGE, WARRIOR_ARMOR, WARRIOR_MAGICRES, WARRIOR_DODGE_CHANCE, WARRIOR_CRIT_CHANCE);
}

