#include <string>
#include <iostream>

class Zombie
{
private:
	std::string type;
	std::string name;

public:
	Zombie();
	Zombie(std::string _type, std::string _name);
	~Zombie();

	void set_zombie_type_name(std::string type, std::string name);
	void announce(void);
};