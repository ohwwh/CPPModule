#include "Animal.hpp"

Animal::Animal(){
	type = "Default";
	std::cout << "Animal is created" << std::endl;
}
Animal::Animal(const Animal& a){
	type = a.type;
	std::cout << "Animal is copied and created" << std::endl;
}
Animal& Animal::operator=(const Animal& a){
	type = a.type;
	std::cout << "Animal is copied" << std::endl;
	return (*this);
}
Animal::~Animal(){
	std::cout << "Animal is destroyed" << std::endl;
}

std::string Animal::getType(void) const{
	return (type);
}

void Animal::makeSound(void) const{
	std::cout << "'Unknown Animal's sound'" << std::endl;
}