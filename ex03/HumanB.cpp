#include "HumanB.hpp"

HumanB::HumanB(const std::string& name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack() const
{
	if (weapon)
		std::cout << name << " attacks with their" << weapon->getType() << std::endl;
	else
		std::cout << name << " doesn't have weapon" << std::endl;
}