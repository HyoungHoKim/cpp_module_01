#include <iostream>
#include <string>

class Pony
{
private:
	std::string name;
	std::string color;

public:
	Pony(std::string _name, std::string _color) {
		name = _name;
		color = _color;
	}

	void about_me(void);
};

void ponyOnTheHeap(std::string name, std::string color);
void ponyOnTheStack(std::string name, std::string color);