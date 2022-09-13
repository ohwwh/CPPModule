#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	Name = "SCV-77";
	hp = 100;
	ep = 50;
	hp_max = hp;
	ep_max = ep;
	damage = 20;
	std::cout << "ScavTrap " << Name << " is created\n";
}
ScavTrap::ScavTrap(const ScavTrap& ct){
	*this = ct;
}
ScavTrap& ScavTrap::operator=(const ScavTrap& ct){
	Name = ct.Name;
	hp = ct.hp;
	ep = ct.ep;
	hp_max = ct.hp_max;
	ep_max = ct.ep_max;
	damage = ct.damage;
	std::cout << "ScavTrap " << Name << " is created from " << ct.Name << "\n";
	return (*this);
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << Name << " is destroyed\n";
}

ScavTrap::ScavTrap(std::string name){
	Name = name;
	hp = 100;
	ep = 50;
	hp_max = hp;
	ep_max = ep;
	damage = 20;
	std::cout << "ScavTrap " << Name << " is created!!\n";
}

void ScavTrap::attack(const std::string& target){
	if (ep > 0 && hp > 0){
		std::cout << "ScavTrap: " << Name << " attacks " << target << ", causing " << damage << " points of damage\n";
		ep --;
		//std::cout << "    <" << hp << ", " << ep << ">\n";
	}
	else if (hp <= 0)
		std::cout << "attack: He is broken......\n";
	else if (ep <= 0)
		std::cout << "attack: not enough ep\n";
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap: " << Name << " is in Gate keeper mode\n";
}