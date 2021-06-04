#include "Pony.hpp"

void Pony::about_me(void)
{
	std::cout << "Hello! I'm a ";
	std::cout << this->color << " Pony, ";
	std::cout << "and my name is ";
	std::cout << this->name << "." << std::endl;
}

