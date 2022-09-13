#include "Animal.hpp"

Animal::Animal(){
	type = "Default";
	std::cout << "animal is created" << std::endl;
}
Animal::Animal(const Animal& a){
	type = a.type;
	std::cout << "animal is copied and created" << std::endl;
}
Animal& Animal::operator=(const Animal& a){
	type = a.type;
	std::cout << "animal is copied" << std::endl;
	return (*this);
}
Animal::~Animal(){
	std::cout << "animal is destroyed" << std::endl;
}

std::string Animal::getType(void) const{
	return (type);
}

void Animal::makeSound(void) const{
	std::cout << "'Unknown animal's sound'" << std::endl;
}