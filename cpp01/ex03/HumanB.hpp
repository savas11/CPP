#ifndef HumanB_HPP
#define HumanB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB{

public:

	std::string name;
	Weapon* weapon;
	void attack( void );
	HumanB(std::string);
	void setWeapon(Weapon &weapon);
	~HumanB();
};

#endif
