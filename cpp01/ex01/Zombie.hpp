#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>

class Zombie{
public:
	void announce( void );
	void set_name(std::string);
    std::string get_name(void);
    Zombie();
    Zombie(std::string _Name);
    ~Zombie();

private:
	std::string Name;
};

Zombie* zombieHorde( int N, std::string name );


#endif