#include "FragTrap.hpp"

FragTrap::FragTrap(){
	Name = "FRG-59";
	hp = 100;
	ep = 100;
	hp_max = hp;
	ep_max = ep;
	damage = 30;
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
	ep = 100;
	hp_max = hp;
	ep_max = ep;
	damage = 30;
	std::cout << "FragTrap " << Name << " is created!!\n";
}

void FragTrap::attack(const std::string& target){
	if (ep > 0 && hp > 0){
		std::cout << "FragTrap: " << Name << " attacks " << target << ", causing " << damage << " points of damage\n";
		ep --;
		//std::cout << "    <" << hp << ", " << ep << ">\n";
	}
	else if (hp <= 0)
		std::cout << "attack: He is broken......\n";
	else if (ep <= 0)
		std::cout << "attack: not enough ep\n";
}

void FragTrap::highFivesGuys(void){
	std::cout << ClapTrap::Name << ": high five!!\n";
}