#pragma once

#include <iostream>

class Fixed{
private:
    int i;
    static const int a = 8;
public:
    Fixed(void);//defult const
    ~Fixed(void);//destroctur
    Fixed(const Fixed& old_raw);//copy constructor
    Fixed& operator=(const Fixed& num);//copy asssigment
    
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};