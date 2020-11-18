#include "Hero.h"

void Hero::setAllStats(int health, int physicalDamage, int magicDamage, int armor, int magicRes, double dodgeChance, double critChance)
{
	this->health = health;
	this->physicalDamage = physicalDamage;
	this->magicDamage = magicDamage;
	this->armor = armor;
	this->magicResist = magicRes;
	this->dodgeChance = dodgeChance;
	this->critChance = critChance;
}

void Hero::printAllStats()
{
	cout <<"Health: "<< this->health << endl;
	this_thread::sleep_for(milliseconds(30));
	cout << "Physical damage: " << this->physicalDamage << endl;
	this_thread::sleep_for(milliseconds(30));
	cout << "Magic damage: " << this->magicDamage << endl;
	this_thread::sleep_for(milliseconds(30));
	cout << "Armor: " << this->armor << endl;
	this_thread::sleep_for(milliseconds(30));
	cout << "Magic resistance: " << this->magicResist << endl;
	this_thread::sleep_for(milliseconds(30));
	cout << "Dodge chance: " << this->dodgeChance *100<<"%" << endl;
	this_thread::sleep_for(milliseconds(30));
	cout << "Crit chance: " << this->critChance*100 <<"%"<< endl;
	this_thread::sleep_for(milliseconds(30));
}

Hero::Hero()
{
	cout << "Hero created. (" << this->className <<")\n\n";
	this_thread::sleep_for(milliseconds(300));

	//this->heroActions["/action_string_key"] = &actionFunctionName; //add all non-class-specific actions here
	this->it = this->heroActions.begin();


}
