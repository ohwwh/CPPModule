#ifndef SCAVTRAP_H
#define SCAVTRAP_H
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
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