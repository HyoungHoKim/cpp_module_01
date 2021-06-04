#include "Zombie.hpp"

void Zombie::announce(void)
{
	std::cout << "<" << this->name;
	std::cout << " (" << this->type << ")" << "> ";
	std::cout << "Braiiiiiiinnnssss..." << std::endl;
}
