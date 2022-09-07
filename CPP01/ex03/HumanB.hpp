#ifndef HUMANB_H
#define HUMANB_H
#include "Weapon.hpp"

class HumanB{
	Weapon *weapon;
	std::string name;
	public:
		HumanB(std::string name);
		void setWeapon(Weapon *weapon);
		void attack(void);
};

#endif