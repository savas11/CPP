#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon& _weapons):name(_name), weapon(_weapons)
{
	std::cout << "Constructor " + this->name << std::endl;
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::~HumanA(){
	//std::cout << "HumanA the end" << std::endl;
}