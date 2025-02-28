#include "Zombie.hpp"

int main(int argc, char const *argv[])
{
	Zombie *Zombie;

	randomChump("Zombie1");
	Zombie = newZombie("Zombie2");
	Zombie->announce();
	Zombie->~Zombie();
	delete Zombie;
	return (0);
}
