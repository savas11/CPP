#pragma once

#include <iostream>
#include <string>

class ClapTrap{
private:
	std::string _name;
	const int healt = 10;
	const int attackdamage = 0;
	const int energy = 10;
public:
	Claptrap::Claptrap();
	Claptrap::~Claptrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getter(void);
	std::string setter(std::string name);
};