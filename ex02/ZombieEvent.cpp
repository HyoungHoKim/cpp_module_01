#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(this->type, name));
}

void	ZombieEvent::randomChump(void)
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
	int num;
	std::string random_name;
	Zombie *new_zombie;

	srand((unsigned int)time(NULL));
	num = rand() % 8;
	random_name = name_pool[num];
	new_zombie = new Zombie(this->type, random_name);
	new_zombie->announce();
	delete new_zombie;
}