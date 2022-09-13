#include "Character.hpp"

Character::Character(){
	_name = "OHW";
	for (int i = 0; i < 4; i ++){
		slot[i] = 0;
		inventory[i] = 0;
	}
}
Character::Character(const Character& c){
	_name = c._name;
	for (int i = 0; i < 4; i ++){
		slot[i] = 0;
		if (!c.inventory[i])
			inventory[i] = 0;
		else
			inventory[i] = c.inventory[i]->clone();
	}
}
Character& Character::operator=(const Character& c){
	_name = c._name;
	for (int i = 0; i < 4; i ++){
		if (slot[i]){
			delete slot[i];
			slot[i] = 0;
		}
		if (inventory[i]){
			delete inventory[i];
			inventory[i] = 0;
		}
	}
	for (int i = 0; i < 4; i ++){
		if (!c.inventory[i])
			inventory[i] = 0;
		else
			inventory[i] = c.inventory[i]->clone();
	}
	return (*this);
}
Character::~Character(){
	for (int i = 0; i < 4; i ++){
		if (slot[i]){
			delete slot[i];
			slot[i] = 0;
		}
	}
	clear_inventory();
}


Character::Character(std::string name){
	_name = name;
	for (int i = 0; i < 4; i ++){
		slot[i] = 0;
		inventory[i] = 0;	
	}
}

std::string const & Character::getName() const{
	return (_name);
}

void Character::equip(AMateria* m){
	for (int i = 0; i < 4; i ++)
	{
		if (!slot[i]){
			slot[i] = m;
			return ;
		}
	}
	std::cout << "slot is full\n";
	//delete m;
}

void Character::unequip(int idx){
	if (!slot[idx])
		std::cout << "This slot is empty\n";
	else{
		for (int i = 0; i < 4; i ++){
			if (!inventory[i]){
				inventory[i] = slot[idx];
				slot[idx] = 0;
				return ;
			}
		}
		std::cout << "inventory is full - cannot unequip\n";
	}
}
void Character::use(int idx, ICharacter& target){
	if (!slot[idx])
		std::cout << "This slot is empty\n";
	else
		slot[idx]->use(target);
}

void Character::clear_inventory(void){
	for (int i = 0; i < 4; i ++){
		if (inventory[i]){
			delete inventory[i];
			inventory[i] = 0;
		}
	}
}