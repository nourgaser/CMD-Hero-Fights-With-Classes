#include "Mage.h"

Mage::Mage(string name)
{
	this->heroActions["/shoot_energy"] = &shootEnergy;
	//this->heroActions["/ability_string_key"] = &abilityFunctionName; //add all abilities like this
	this->it = this->heroActions.begin();
	this->className = "Mage";

	this->name = name;
	setAllStats(MAGE_MAX_HP, MAGE_PHYSICAL_DAMAGE, MAGE_MAGIC_DAMAGE, MAGE_ARMOR, MAGE_MAGICRES, MAGE_DODGE_CHANCE, MAGE_CRIT_CHANCE);
}

