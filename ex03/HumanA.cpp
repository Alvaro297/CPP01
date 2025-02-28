#include "HumanA.hpp"

void HumanA::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanA::attack() const
{
	if (weapon)
		std::cout << name << "attacks with their" << weapon->getType() << std::endl;
}