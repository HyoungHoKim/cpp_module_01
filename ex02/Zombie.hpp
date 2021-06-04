#include <string>
#include <iostream>

class Zombie
{
private:
	std::string type;
	std::string name;

public:
	Zombie(std::string _type, std::string _name) {
		type = _type;
		name = _name;
	}

	void announce(void);
}