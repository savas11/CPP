#pragma once

#include <iostream>
#include <string>

class ClapTrap{
private:
	std::string const _name;
	const int hitPoints;
	const int energyPoints;
	const int attackDamage;
public:
	ClapTrap();
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string ClapTrap::getname() const;
	int getHitPoints() const;
};