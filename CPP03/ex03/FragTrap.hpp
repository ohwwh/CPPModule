#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap{
	public:
		FragTrap();
		FragTrap(const FragTrap& ct);
		FragTrap& operator=(const FragTrap& ct);
		~FragTrap();

		FragTrap(std::string name);
		void highFiveGuys(void);
		void attack(const std::string& target);
};

#endif