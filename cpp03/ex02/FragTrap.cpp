#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
    std::cout << " FragTrap Default constructer called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(30);
    std::cout << "FragTrap Default Constructer Called" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called\n";
}

FragTrap::FragTrap(const FragTrap& copy) {
    *this = copy;
}

FragTrap &FragTrap::operator=(const ClapTrap& copy) {
    this->setname(copy.getname());
    this->setEnergyPoints(copy.getEnergyPoints());
    this->setHitPoints(copy.getHitPoints());
    this->setAttackDamage(copy.getAttackDamage());
    return (*this);
}

void    FragTrap::highFivesGuys() {
    std::cout << "FragTrap High Fives Guys : " << this->getname() << " want's to high five\n";
}

std::ostream&   operator<<(std::ostream& o, FragTrap& c) {
	o << "FragTrap Status " << c.getname() << ": HitPoints : " << c.getHitPoints() << " | Energy Point : " << c.getEnergyPoints() << " | Take Damage " << c.getAttackDamage() << " | " << std::endl;
    return o;
}
