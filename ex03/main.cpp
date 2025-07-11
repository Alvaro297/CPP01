#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob = HumanA("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		HumanB jim = HumanB("Jim");
		jim.attack(); // Jim ataca sin arma
		Weapon club = Weapon("crude spiked club");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
