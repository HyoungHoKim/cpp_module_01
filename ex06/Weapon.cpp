#include "Weapon.hpp"

Weapon::Weapon() { }

Weapon::Weapon(std::string _type)
{
	this->type = _type;
}

Weapon::~Weapon() { }

const std::string& Weapon::getType(void) const
{
	return (this->type);
}

void Weapon::setType(std::string _type)
{
	this->type = _type;
}