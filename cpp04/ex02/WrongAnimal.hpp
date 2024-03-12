#pragma once

#include <string>
#include <iostream>

class WrongAnimal {
    protected:
        std::string _type;
    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(const WrongAnimal&);
        WrongAnimal& operator=(const WrongAnimal&);

        virtual void makeSound(void) const;

        std::string getType(void)const;
};