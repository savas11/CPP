#include "ClapTrap.hpp"

int main()
{
	ClapTrap l("Leonardo");
	ClapTrap r("Rafiel");

	l.attack("Rafiel");
	r.attack("Leonardo");

	l.takeDamage(10);
	r.beRepaired(5);

	l.status();
	r.status();
}