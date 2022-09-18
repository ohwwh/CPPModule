#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {
	std::string Name;
	unsigned int hp;
	unsigned int ep;
	unsigned int hp_max;
	unsigned int ep_max;
	unsigned int damage;
	public:
		ClapTrap();
		ClapTrap(const ClapTrap& ct);
		ClapTrap& operator=(const ClapTrap& ct);
		~ClapTrap();
		
		ClapTrap(std::string name);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif