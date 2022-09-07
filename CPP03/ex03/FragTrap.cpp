#include "FragTrap.hpp"

FragTrap::FragTrap(){
	Name = "FRG-59";
	hp = 100;
	ep = 50;
	hp_max = hp;
	ep_max = ep;
	damage = 20;
	std::cout << "FragTrap " << Name << " is created\n";
}
FragTrap::FragTrap(const FragTrap& ct){
	*this = ct;
}
FragTrap& FragTrap::operator=(const FragTrap& ct){
	Name = ct.Name;
	hp = ct.hp;
	ep = ct.ep;
	hp_max = ct.hp_max;
	ep_max = ct.ep_max;
	damage = ct.damage;
	std::cout << "FragTrap " << Name << " is created from " << ct.Name << "\n";
	return (*this);
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << Name << " is destroyed\n";
}

FragTrap::FragTrap(std::string name){
	Name = name;
	hp = 100;
	ep = 50;
	hp_max = hp;
	ep_max = ep;
	damage = 20;
	std::cout << "FragTrap " << Name << " is created!!\n";
}

void FragTrap::highFiveGuys(void){
	std::cout << Name << ": high five!!\n";
}