#include "ClapTrap.hpp"

int main()
{
	ClapTrap c("Leonardo");
	ClapTrap a("Rafiel");

	c.attack("Rafiel");
	a.attack("Leonardo");

	c.takeDamage(5);
	a.beRepaired(5);

}

/*Not Defteri
 : this->_name(copy.getname()), this->hitPoints(copy.getHitPoints()), this->energyPoints(copy.getEnergyPoints()), this->attackDamage(copy.getAttackDamage()) 







*/