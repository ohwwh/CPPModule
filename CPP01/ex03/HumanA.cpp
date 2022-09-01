#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : 
name(name), weapon(weapon){}

void HumanA::attack(void){
	std::cout << name << " attcks with his " 
	<< weapon.getType() << std::endl;
}