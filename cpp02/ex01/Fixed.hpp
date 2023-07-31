#pragma once

#include <iostream>
#include <string>
#include <cmath>

class Fixed{
private:
	int _fixed;
	static const int a = 8;

public:
	int getRawBits( void ) const;
	void setRawBits(int const raw);
	Fixed(); //Default const
	Fixed(const Fixed &); //Copy const
	Fixed& operator=(const Fixed&); // esittir operatoru
	~Fixed(); //Destructor

	Fixed(const int);
	int toInt(void) const;

	Fixed(const float);
	float toFloat(void) const;
};

std::ostream & operator<<(std::ostream &o, const Fixed &f);