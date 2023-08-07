#include "Cat.hpp"

Cat::Cat(): Animal(){
    std::cout << "Cat constructor called" << std::endl;
    Animal::type = "Cat";
}

Cat::Cat(const Cat& copy): Animal() {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat &Cat::operator=(const Cat& copy) {
    Animal::type = copy.type;
    this->brain = copy.brain;
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "Miyav Miiiiiyavv" << std::endl;
}

Brain *Cat::getBrain() const {
    return brain;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}
