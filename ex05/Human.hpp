#include "Brain.hpp"

class Human
{
private:
	const Brain brain;

public:
	Human();
	~Human();

	std::string identify(void) const;
	const Brain& getBrain(void) const;
};