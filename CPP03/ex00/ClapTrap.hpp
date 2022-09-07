#include <iostream>

class ClapTrap {
	std::string Name;
	int	hp;
	int ep;
	int damage;
	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};