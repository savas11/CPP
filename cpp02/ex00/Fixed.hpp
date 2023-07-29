#pragma once

#include <iostream>
#include <string>

class Fixed{
private:
	int i;
	static const int a = 8;

public:
	int getRawBits( void ) const;
	void setRawBits(int const raw);
	Fixed(); //Default const
	~Fixed(); //Destructor
	Fixed::Fixed(const Fixed &j); //Copy const
	Fixed& operator=(const Fixed&);
};