#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
	std::string Name;
	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap& ct);
		DiamondTrap& operator=(const DiamondTrap& ct);
		~DiamondTrap();

		DiamondTrap(std::string name);
		void attack(const std::string& target);
		void whoAmI(void);
};

#endif