#pragma once

#include <iostream>

class Fixed{
private:
    int i;
    static const int a = 8;
public:
    Fixed(void);
    Fixed(const Fixed& old_raw);
    ~Fixed(void);
    
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    Fixed& operator=(const Fixed& num);
};