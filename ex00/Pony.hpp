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

	std::string get_name(void);
	std::string get_color(void);

	void about_me(void);
}