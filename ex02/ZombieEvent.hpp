#include <cstdlib>
#include <ctime>
#include "Zombie.hpp"

class	ZombieEvent
{
private:
	std::string type;

public:
	void	setZombieType(std::string type);
	Zombie	*newZombie(std::string name);
	void	randomChump(void);
};