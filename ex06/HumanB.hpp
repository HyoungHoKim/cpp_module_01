#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	Weapon *weapon;
	std::string name;

public:
	HumanB(std::string _name) : name(_name) { }
	
	void setWeapon(Weapon &weapon);
	void attack(void) const;
};

#endif 