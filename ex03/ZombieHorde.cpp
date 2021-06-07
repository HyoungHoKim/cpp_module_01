#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int _n)
{
	std::string name_pool[8] = {
		"red",
		"blue",
		"green",
		"yellow",
		"pink", 
		"black",
		"white",
		"rainbow"
	};

	this->n = _n;
	this->zombie = new Zombie[n];
	int num;

	srand((unsigned int)time(NULL));
	for (int i = 0; i < this->n; i++)
	{
		num = rand() % 8;
		zombie[i].set_zombie_type_name("ZombieHorde", name_pool[num]);
		zombie[i].announce();
	}
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->zombie;
}
