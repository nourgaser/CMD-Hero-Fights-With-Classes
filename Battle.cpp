#include "Battle.h"

Battle::Battle(Hero& attacker, Hero& defender)
{
	cout << "Battle created.\n";
	this_thread::sleep_for(milliseconds(300));
	turn = 1;
}
