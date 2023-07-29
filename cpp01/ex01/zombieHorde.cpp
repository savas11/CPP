#include "Zombie.hpp"
#include <sstream>
Zombie* zombieHorde( int N, std::string name )
{
	int i = 1;

	Zombie *Z = new Zombie[N];
	while(N--)
	{
		Z->set_name(name + std::to_string(i));
		Z->announce();
		i++;
	}
	return (Z);
}