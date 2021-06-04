#include "Pony.hpp"

void Pony::about_me(void)
{
	std::cout << "Hello! I'm a ";
	std::cout << this->color << " Pony, ";
	std::cout << "and my name is ";
	std::cout << this->name << "." << std::endl;
}

void ponyOnTheHeap(std::string name, std::string color)
{
	Pony *h_pony = new Pony(name, color);
	h_pony->about_me();
	delete h_pony;
	std::cout << "Heap Pony Deleted!!!" << std::endl;
	return ;
}

void ponyOnTheStack(std::string name, std::string color)
{
	Pony s_pony = Pony(name, color);
	s_pony.about_me();
	std::cout << "Stack Pony Deleted!!!" << std::endl;
	return ;
}