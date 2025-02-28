#include "Zombie.hpp"

using namespace std;

void Zombie::announce()
{
	cout << name << ": BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	cout << "Zombie " << name << "was created" << endl;
}

Zombie::~Zombie()
{
	cout << "Zombie " << name << " destroyed." << endl;
}