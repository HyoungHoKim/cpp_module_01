#include "ZombieEvent.hpp"

int main()
{
	Zombie *sample_z1 = new Zombie("fat", "red");
	ZombieEvent z_event;
	Zombie *sample_z2;

	std::cout << "------ Zombie Class Test ------" << std::endl;
	sample_z1->announce();
	delete sample_z1;

	std::cout << "------ ZombieEvent setZomieType and newZombie Test" << std::endl;
	z_event.setZombieType("skinny");
	sample_z2 = z_event.newZombie("blue");
	sample_z2->announce();
	delete sample_z2;

	std::cout << "------ ZombieEvent RandomChump Test ------" << std::endl;
	z_event.setZombieType("explosion");
	z_event.randomChump();
	return (0);
}