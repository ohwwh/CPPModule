#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	Name = "CL4P-TP";
	hp = 10;
	ep = 10;
	hp_max = hp;
	ep_max = ep;
	damage = 0;
	std::cout << "ClapTrap "<< Name << " is created\n";
}
ClapTrap::ClapTrap(const ClapTrap& ct){
	*this = ct;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& ct){
	Name = ct.Name;
	hp = ct.hp;
	ep = ct.ep;
	hp_max = ct.hp_max;
	ep_max = ct.ep_max;
	damage = ct.damage;
	std::cout << "ClapTrap " << Name << " is created from " << ct.Name << "\n";
	return (*this);
}
ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << Name << " is destroyed\n";
}

ClapTrap::ClapTrap(std::string name){
	Name = name;
	hp = 10;
	ep = 10;
	hp_max = hp;
	ep_max = ep;
	damage = 0;
	std::cout << "ClapTrap " << Name << " is created!!\n";
}

void ClapTrap::attack(const std::string& target){
	if (ep > 0 && hp > 0){
		std::cout << "ClapTrap: " << Name << " attacks " << target << ", causing " << damage << " points of damage\n";
		ep --;
		//std::cout << "    <" << hp << ", " << ep << ">\n";
	}
	else if (hp <= 0)
		std::cout << "attack: He is broken......\n";
	else if (ep <= 0)
		std::cout << "attack: not enough ep\n";
}
void ClapTrap::takeDamage(unsigned int amount){
	if (hp > 0)
	{
		if (hp < amount)
			amount = hp;
		std::cout << Name << " is damaged, losing " << amount << " points of hp\n";
		hp -= amount;
		//std::cout << "    <" << hp << ", " << ep << ">\n";
		if (hp <= 0){
			std::cout << Name << " is broken\n";
			hp = 0;
		}
	}
	else
		std::cout << "takeDamage: He has already been broken......\n";
}
void ClapTrap::beRepaired(unsigned int amount){
	if (ep > 0 && hp > 0 && hp < hp_max){
		if (hp + amount > hp_max)
			amount = hp_max - hp;
		std::cout << Name << " repairs himself, recovering " << amount << " points of hp\n";
		ep --;
		hp += amount;
		//std::cout << "    <" << hp << ", " << ep << ">\n";
	}
	else if (hp >= hp_max)
		std::cout << "repair: hp is already full\n";
	else if (hp <= 0)
		std::cout << "repair: He is broken...... cannot repair himself\n";
	else if (ep <= 0)
		std::cout << "repair: not enough ep\n";
}
