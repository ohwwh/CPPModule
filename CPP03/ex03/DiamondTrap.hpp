#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
	std::string Name;
	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap& ct);
		DiamondTrap& operator=(const DiamondTrap& ct);
		~DiamondTrap();
};

#endif