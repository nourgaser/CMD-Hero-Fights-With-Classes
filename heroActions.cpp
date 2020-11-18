#include "heroActions.h"

//Non-class-specific

//Warrior
void swingSword(Hero& attacker, Hero& defender, Battle& battle)
{
	int damageDealt = attacker.physicalDamage;
	defender.health -= damageDealt;
	cout << attacker.name << " attacks " << defender.name << " and deals " << damageDealt << " physical damage.\n";
}

void swingSwordHard(Hero& attacker, Hero& defender, Battle& battle)
{
	int damageDealt = attacker.physicalDamage + 50;
	defender.health -= damageDealt;
	cout << attacker.name << " attacks " << defender.name << " and deals " << damageDealt << " physical damage.\n";
}

//Mage
void shootEnergy(Hero& attacker, Hero& defender, Battle& battle)
{
	int damageDealt = attacker.magicDamage;
	defender.health -= damageDealt;
	cout << attacker.name << " attacks " << defender.name << " and deals " << damageDealt << " magic damage.\n";
}

