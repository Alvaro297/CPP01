#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name )
{
	if (N <= 0)
		return NULL;
	Zombie* vZombieHorde = new Zombie[N];
	for (int i = 0; i < N; ++i)
		vZombieHorde[i] = Zombie(name);
	return (vZombieHorde);
}
