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
	~Zombie(){
		std::cout << "Zombie : " << "<";
		std::cout << name << " (" << type << ")" << ">";
		std::cout << " Death!!!" << std::endl;
	}

	void announce(void);
};