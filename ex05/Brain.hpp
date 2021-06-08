#include <iostream>
#include <string>
#include <sstream>

class Brain
{
private:
	int iq;
	int eq;

public:
	Brain();
	Brain(int _iq, int _eq);
	~Brain();

	std::string identify(void) const;
};