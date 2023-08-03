#include "ScavTrap.hpp"

int main() {
	ScavTrap r("Robocop");
	ScavTrap s("Terminator");

	r.attack("Terminator");
	s.beRepaired(1);
	r.takeDamage(2);
	s.beRepaired(2);
	r.guardGate();
	s.guardGate();

	r.status();
	s.status();

	return (0);
}