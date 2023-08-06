#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default Constroctor called "<< std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal : Destroctor called" << std::endl;
}

Animal::Animal(std::string _type){
    std::cout <<"Animal string constructor" << std::endl;
    setType(_type);
}

Animal &Animal::operator=(Animal& const copy)
{
    this->type = copy.getType(); 
    return(*this);
}

std::string Animal::getType(void)
{
    return(this->type);
}

std::string Animal::setType(std::string set)
{
    this->type = set;
}

void Animal::makeSound()
{
    std::cout << "Animal soundddd" << std::endl;
}