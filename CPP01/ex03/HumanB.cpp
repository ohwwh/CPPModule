#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->name = name;
	weapon = 0;
}

void HumanB::setWeapon(Weapon *weapon){
	this->weapon = weapon;
}

void HumanB::attack(void){
	if (!weapon)
	{
		std::cout << name << " is unarmed" << std::endl;
		return ;
	}
	std::cout << name << " attcks with his " 
	<< weapon->getType() << std::endl;
}