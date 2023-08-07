#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal(){
    std::cout << "WrongCat constructor called" << std::endl;
    WrongAnimal::type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy): WrongAnimal(){
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat& copy) {
    WrongAnimal::type = copy.type;
    return (*this);
}

void WrongCat::makeSound() const {
    std::cout << "Wrong Cat Sound LA LA LA" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}
