#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {
	protected:
		std::string Name;
		int	hp;
		int ep;
		int hp_max;
		int ep_max;
		int damage;
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