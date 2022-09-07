#ifndef HUMANA_H
#define HUMANA_H
#include "Weapon.hpp"

class HumanA{
	Weapon& weapon;
	std::string name;
	public:
		HumanA(std::string name, Weapon& weapon);
		void attack(void);
};

#endif