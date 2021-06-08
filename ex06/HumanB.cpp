#include "HumanB.hpp"
	
void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack(void) const
{
	std::cout << this->name;
	std::cout << " attack with his ";
	std::cout << this->weapon->getType() << std::endl;
}