#pragma once

#include <iostream>
#include <iomanip>

#define YEL "\x1B[33m"
#define BLUE "\x1B[34m"

template <typename Iterator>

void iter(Iterator* arr,  size_t len, void (*fonk)(Iterator const &)) 
{
    for(size_t i = 0; i < len; i++) {
        fonk(arr[i]);
    }
}