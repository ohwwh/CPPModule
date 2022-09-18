#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap{
	public:
		FragTrap();
		FragTrap(const FragTrap& ct);
		FragTrap& operator=(const FragTrap& ct);
		~FragTrap();

		FragTrap(std::string name);
		void highFivesGuys(void);
		void attack(const std::string& target);
};

#endif