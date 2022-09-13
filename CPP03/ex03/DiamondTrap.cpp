#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	Name = "DMD-99";
	ClapTrap::Name = Name + "_clap_name";
	hp = 100;
	ep = 50;
	hp_max = hp;
	ep_max = ep;
	damage = 30;
	std::cout << "DiamondTrap " << Name << " is created\n";
}
DiamondTrap::DiamondTrap(const DiamondTrap& ct){
	*this = ct;
}
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& ct){
	Name = ct.Name;
	ClapTrap::Name = ct.ClapTrap::Name;
	hp = ct.hp;
	ep = ct.ep;
	hp_max = ct.hp_max;
	ep_max = ct.ep_max;
	damage = ct.damage;
	std::cout << "DiamondTrap " << Name << " is created from " << ct.Name << "\n";
	return (*this);
}
DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << Name << " is destroyed\n";
}


DiamondTrap::DiamondTrap(std::string name){
	Name = name;
	ClapTrap::Name = Name + "_clap_name";
	hp = 100;
	ep = 50;
	hp_max = hp;
	ep_max = ep;
	damage = 30;
	std::cout << "DiamondTrap " << Name << " is created\n";
}

void DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void){
	std::cout << "DiamondTrap's name: " << Name <<  std::endl;
	std::cout << "ClapTrap's name: " << ClapTrap::Name <<  std::endl;
}