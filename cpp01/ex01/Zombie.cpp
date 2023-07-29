#include "Zombie.hpp"

void Zombie::announce( void )
{
	std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}

std::string Zombie::get_name(void)
{
    return(this->Name);
}

void Zombie::set_name(std::string _name)
{
    this->Name = _name;
}

Zombie::Zombie(){
}

Zombie::Zombie(std::string _Name)
{
    set_name(_Name);
}

Zombie::~Zombie(){

    std::cout << "Zombiler yok edildi" << std::endl;
}
