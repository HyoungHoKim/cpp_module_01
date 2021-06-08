#include "HumanA.hpp"

HumanA::~HumanA() { }

void HumanA::attack(void) const
{
	std::cout << this->name;
	std::cout << " attack with his ";
	std::cout << this->weapon.getType() << std::endl;
}