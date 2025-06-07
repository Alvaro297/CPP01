#include "Zombie.hpp"

int main()
{
	Zombie *Zombie;

	randomChump("Zombie1");
	Zombie = newZombie("Zombie2");
	Zombie->announce();
	Zombie->~Zombie();
	delete Zombie;
	return (0);
}
