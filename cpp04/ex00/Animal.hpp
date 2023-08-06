#pragma once

#include <iostream>
#include <string>

class Animal {
protected:
    std::string type;
public:
    std::string getType(void);
    std::string setType(std::string set);
    Animal(std:: string _type);
    Animal &operator=(Animal& const copy);
    ~Animal();
    void makeSound();
    Animal();
};