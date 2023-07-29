#ifndef HumanA_HPP
#define HumanA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA{
public:
	std::string name;
	Weapon& weapon;
	void attack( void );
	HumanA(std::string, Weapon& weapons);
	~HumanA();
	

};

#endif