#include "FragTrap.hpp"

int main() {
	{
		FragTrap k("Kermit");
		FragTrap e("Elmo");

	// k.guardGate();
	k.highFivesGuys();
	e.takeDamage(5);
	// e.highFivesGuys();
	std::cout << k ;
	}
	return (0);
}