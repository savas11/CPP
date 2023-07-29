#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *a = new Zombie;
	a->set_name(name);
	return (a);
}