#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap Default Constructor Called" << std::endl;
	std::cout << "ClapTrap " << name << " is born xD" << std::endl;
	std::cout << "ClapTrap " << name << " has" << hitPoints << " hit points " << "-----" << " Energy Point " << this->energyPoints << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& copy) 
{
    this->_name = copy.getname();
    this->hitPoints = copy.getHitPoints();
    this->energyPoints = copy.getEnergyPoints();
    this->attackDamage = copy.getAttackDamage();
    return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap "<< this->_name << " destructor death :(" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->_name << " attacks"<< target << " causing " << this->attackDamage << " points of damage! " << std::endl;
}

void ClapTrap::takeDamage(unsigned int _attackDamage)
{
    this->attackDamage = _attackDamage;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->hitPoints += amount;
}

std::string ClapTrap::getname() const {
    return (this->_name);
}

int ClapTrap::getHitPoints() const {
    return (this->hitPoints);
}

int ClapTrap::getEnergyPoints() const {
    return (this->energyPoints);
}

int ClapTrap::getAttackDamage() const {
    return (this->attackDamage);
}

void ClapTrap::setHitPoints(int amount) {
    this->hitPoints = amount;
}

void ClapTrap::setEnergyPoints(int amount) {
    this->energyPoints = amount;
}

void ClapTrap::setAttackDamage(int amount) {
    this->attackDamage = amount;
}