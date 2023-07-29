#include "Weapon.hpp"

const std::string& Weapon::getType()
{
	return (this->type);
}

void Weapon::setType(std::string _type)
{
	this->type = _type;
}

Weapon::Weapon(std::string _type)
{
	setType(_type);
}

Weapon::~Weapon()
{
	//std::cout << "Weapon the end" << std::endl;
}