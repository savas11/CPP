#pragma once
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& copy);
        FragTrap &operator=(const ClapTrap& copy);
        ~FragTrap();
        void highFivesGuys(void);
};

std::ostream&   operator<<(std::ostream& o, FragTrap& c);