#include "ClapTrap.hpp"

Claptrap::Claptrap()
{
	//default const
}

Claptrap::~Claptrap()
{
	a///destroyy
}

void attack(const std::string& target)
{
	std::cout << ClapTrap << name << attacks <<target>, causing <damage> points of damage!
}

void takeDamage(unsigned int amount)
{

}

void beRepaired(unsigned int amount)
{

}

std::string getter(void) {return _name;}
std::string setter(std::string name){_name = name;}
