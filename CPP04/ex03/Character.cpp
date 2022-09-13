#include "Character.hpp"

Character::Character(){
	_name = "OHW";
	for (int i = 0; i < 4; i ++)
		slot[i] = 0;
}
Character::Character(const Character& c){
	_name = c._name;
	for (int i = 0; i < 4; i ++){
		if (!c.slot[i])
			slot[i] = 0;
		else
			slot[i] = c.slot[i]->clone();
	}
}
Character& Character::operator=(const Character& c){
	_name = c._name;
	for (int i = 0; i < 4; i ++){
		if (slot[i]){
			delete slot[i];
			slot[i] = 0;
		}
	}
	for (int i = 0; i < 4; i ++){
		if (!c.slot[i])
			slot[i] = 0;
		else
			slot[i] = c.slot[i]->clone();
	}
}
Character::~Character(){
	for (int i = 0; i < 4; i ++)
		slot[i] = 0;
}


Character::Character(std::string name){
	_name = name;
	for (int i = 0; i < 4; i ++)
		slot[i] = 0;
}
std::string const & Character::getName() const{
	return (_name);
}
void Character::equip(AMateria* m){
	for (int i = 0; i < 4; i ++)
	{
		if (!slot[i]){
			slot[i] = m;
			break;
		}
		if (i == 3)
			std::cout << "slot is full\n";
	}
}
void Character::unequip(int idx){
	if (!slot[idx])
		std::cout << "This slot is empty\n";
	else
		slot[idx] = 0;
}
void Character::use(int idx, ICharacter& target){
	if (!slot[idx])
		std::cout << "This slot is empty\n";
	else
		slot[idx]->use(target);
}