#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string _type, std::string _name)
{
	this->type = _type;
	this->name = _name;
}

Zombie::~Zombie()
{
	std::cout << "Zombie : " << "<";
	std::cout << name << " (" << type << ")" << ">";
	std::cout << " Death!!!" << std::endl;
}

void Zombie::set_zombie_type_name(std::string _type, std::string _name)
{
	this->type = _type;
	this->name = _name;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->name;
	std::cout << " (" << this->type << ")" << "> ";
	std::cout << "Braiiiiiiinnnssss..." << std::endl;
}

