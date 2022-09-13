#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	type = "Default";
	std::cout << "WrongAnimal is created" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& a){
	type = a.type;
	std::cout << "WrongAnimal is copied and created" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& a){
	type = a.type;
	std::cout << "WrongAnimal is copied" << std::endl;
	return (*this);
}
WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal is destroyed" << std::endl;
}

std::string WrongAnimal::getType(void) const{
	return (type);
}

void WrongAnimal::makeSound(void) const{
	std::cout << "'Unknown WrongAnimal's sound'" << std::endl;
}