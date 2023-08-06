#pragma once

#include "Animal.hpp"

class Dog : protected Animal{
public:
    Dog();
    ~Dog();
    Dog(Dog& const copy);
    Dog &operator=(Dog& const copy);
    //void makeSound() const;
};