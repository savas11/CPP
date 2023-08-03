#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << " ScavTrap Default constructer called" << std::endl;
}

ScavTrap::ScavTrap(std::string _name): ClapTrap(_name) {
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
    std::cout << "ScavTrap Default Constructer Called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap& copy) {
    *this = copy;
}

ScavTrap &ScavTrap::operator=(const ClapTrap& copy) {
    this->setname(copy.getname());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setHitPoints(copy.getHitPoints());
    this->setAttackDamage(copy.getAttackDamage());
    return (*this);
}

void ScavTrap::attack(const std::string& target) {
    if (this->getHitPoints() <= 0)
        return ;
    if (this->getEnergyPoints() <= 0) {
        std::cout << "Attack Fonk ScavTrap : " << this->getname() << " does not have any energy points to attack\n";
        return ;
    }
    std::cout << "Attack Fonk ScavTrap : " << this->getname() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!\n";
    this->setEnergyPoints(this->getEnergyPoints() - 1);
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap : " << this->getname() << " Guard Mod -> ON \n";
}