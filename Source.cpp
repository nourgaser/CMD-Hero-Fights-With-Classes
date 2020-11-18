#include "Warrior.h"
#include "Mage.h"

void main()
{
	Warrior player1("Thor");
	Mage player2("Jaina");
	Battle battle(player1, player2);

	cout << player1.name << "'s current health: " << player1.health << endl;
	player2.heroActions["/shoot_energy"](player2, player1, battle);
	cout << player1.name << "'s current health: " << player1.health;

}

