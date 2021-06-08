#include "Brain.hpp"

Brain::Brain() 
{
	this->iq = 135;
	this->eq = 50;
}
Brain::Brain(int _iq, int _eq)
{
	this->iq = _iq;
	this->eq = _eq;
}
Brain::~Brain() { }

std::string Brain::identify(void) const
{
	std::stringstream ss;
	ss << this;
	return (ss.str());
}