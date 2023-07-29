#include "HumanB.hpp"

void HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

HumanB::HumanB(std::string _name):name(_name)
{
	std::cout << "Constructor " + name << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon ;
}

HumanB::~HumanB(){
	//std::cout << "HumanB the end" << std::endl;
}