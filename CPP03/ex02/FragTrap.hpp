#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	std::string Name;
	public:
		FragTrap();
		FragTrap(const FragTrap& ct);
		FragTrap& operator=(const FragTrap& ct);
		~FragTrap();

		FragTrap(std::string name);
		void highFiveGuys(void);
};

#endif