#include "Fixed.hpp"

int Fixed::getRawBits(void) const {
    return(this->_fixed);
}

void Fixed::setRawBits(int const nbr){
    this->_fixed = nbr;
}

////////////////////////////////////////////////////////////////////////////
Fixed::Fixed() : _fixed(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy) : _fixed(copy.getRawBits()){
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &obj){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
    {
        this->_fixed = obj.getRawBits(); 
    }
    return (*this);
}

Fixed::~Fixed(){
        std::cout << "Destructor called" << std::endl;
}

////////////////////////////////////////////////////////////////////////////

Fixed::Fixed(const int nbr) : _fixed(nbr << a) {
    std::cout << "Int constructor called" << std::endl;
}

int Fixed::toInt() const
{
    return (getRawBits() >> a);
}

////////////////////////////////////////////////////////////////////////////

float Fixed::toFloat(void) const {
    return((float)getRawBits() / (1 << a));
}

Fixed::Fixed(const float nbr) : _fixed(roundf(nbr * (1 << a))) {
    std::cout << "Float constructor called" << std::endl;
}

////////////////////////////////////////////////////////////////////////////

std::ostream & operator<<(std::ostream &o, const Fixed &f)
{
	o << f.toFloat();
	return o;
}