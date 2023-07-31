#include "Fixed.hpp"

Fixed::Fixed(){
    this->i = 0;
    std::cout << "default constructer called" << std::endl;
}
Fixed::Fixed(const Fixed& oldi)
{   this->i = oldi.getRawBits();
    std::cout << "copy constructer called" << std::endl;
}

int Fixed::getRawBits()const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return i;
}

void Fixed::setRawBits(int const newi)
{
    std::cout << "setRawBits operator called" << std::endl;
    this->i =newi;
}

Fixed& Fixed::operator=(const Fixed& num){
    std::cout << "copy assignment operator called" << std::endl;
    this->i = num.getRawBits();
    return *this;
}

Fixed::~Fixed(){std::cout << "deconstructer called" << std::endl;}