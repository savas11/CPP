#pragma once

#include <iostream>
#include <string>

class ClapTrap{
private:
	std::string _name;
	int hitPoints;
	int energyPoints;
	int attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	virtual ~ClapTrap();
	ClapTrap &operator=(const ClapTrap& copy);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getname() const;
	void setname(std::string name) const;
	int getHitPoints() const;
	int getEnergyPoints() const;
	int getAttackDamage() const;
	void setHitPoints(int amount);
	void setEnergyPoints(int amount);
	void setAttackDamage(int amount);
	void status();
};