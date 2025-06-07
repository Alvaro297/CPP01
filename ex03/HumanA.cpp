#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

HumanA::~HumanA() {}

void HumanA::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanA::attack() const
{
	if (weapon)
		std::cout << name << "attacks with their" << weapon->getType() << std::endl;
}