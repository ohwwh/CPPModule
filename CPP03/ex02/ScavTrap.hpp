#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(const ScavTrap& ct);
		ScavTrap& operator=(const ScavTrap& ct);
		~ScavTrap();
		
		ScavTrap(std::string name);
		void guardGate();
		void attack(const std::string& target); //오버라이딩
};
#endif