#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
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