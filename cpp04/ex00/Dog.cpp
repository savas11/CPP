#include "Dog.hpp"

void Animal::makeSound()
{
    std::cout << "Hav Hav Hiiiiirrrr Hav Hav" << std::endl;
}

Dog::Dog()
{
    std::cout << "Dog Default Constrackter" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog:  Destroctor called" << std::endl;
}

Dog &Dog::operator=(Dog& const copy)
{
    Animal::type = copy.getType(); 
    return(*this);
}

Dog::Dog(Dog& const copy)
{
    std::cout << "Dog : copy constructor called\n";
    *this = copy;
}