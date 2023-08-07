#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog constructor called" << std::endl;
    Animal::type = "Dog";
}

Dog::Dog(const Dog& copy) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog& copy) {
    Animal::type = copy.type;
    this->brain = copy.brain;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "Hav Hav Havvvvv" << std::endl;
}

Brain *Dog::getBrain() const {
    return brain;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;;
    delete brain;
}
