#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap Default Constructor Called" << std::endl;
	std::cout << "ClapTrap " << name << " is born xD" << std::endl;
	std::cout << "ClapTrap " << name << " has " << " | " << "Hit Points :" << hitPoints << " | " << " Energy Point : " << this->energyPoints << " | " << " Take Damage : "<< attackDamage << " | " << std::endl;
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

void ClapTrap::attack(const std::string& target) // Saldiri yapmak
{
    if (this->hitPoints <= 0 or this->energyPoints <= 0)
    {
        std::cout << this->_name << "'s energy point and hit point run out!!" << std::endl;
        return ;
    }
    std::cout<< "AttackFonk : Claptrap "<< this->_name << " attack"  "(" << this->hitPoints << ") attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int _attackDamage) //Hasar almak
{
    this->attackDamage -= _attackDamage;
    if(this->attackDamage <= 0) { std::cout << "TakeDamage :"<< this->_name << " take damage is death :/" << std::endl;  } 
    else {std::cout << "TakeDamage : "<<  "ClapTrap " << this->_name << " attacks " << this->attackDamage << " points of damage! " << std::endl; }
}

void ClapTrap::beRepaired(unsigned int health) // Can point arttirmak
{
    if(this->hitPoints > 0)
    {
    this->hitPoints += health;
    std::cout << "Be Repaired : "<<  "ClapTrap " << this->_name << " be reapaired " << this->hitPoints << " points of repair! " << std::endl;
    }
    else
        std::cout << "Be Repaired :" << this->_name << "Hit Point == 0 don't be repaired :(" << std::endl;
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