#include "Fixed.hpp"


int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return 0;
}

void Fixed::setRawBits(int const _i) {
    i = _i;
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	Fixed::i = 0;
}

 Fixed::~Fixed() {
        std::cout << "Destructor called" << std::endl;
    }
Fixed::Fixed(const Fixed &j)
{
		std::cout << "Copy constructor called" << std::endl;
		*this = j;
}

Fixed& Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->_fixed = obj.getRawBits(); 
    }
    return (*this);
}