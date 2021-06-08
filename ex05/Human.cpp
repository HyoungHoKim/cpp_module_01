#include "Human.hpp"

Human::Human() { }
Human::~Human() { }

std::string Human::identify(void) const
{
	return (this->brain.identify());
}

const Brain& Human::getBrain(void) const
{
	return (this->brain);
}