#include "WrongCat.hpp"

WrongCat::WrongCat(){
	type = "Cat";
	std::cout << "WrongCat is created" << std::endl;
}
WrongCat::WrongCat(const WrongCat& a){
	type = a.type;
	std::cout << "WrongCat is copied and created" << std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat& a){
	type = a.type;
	std::cout << "WrongCat is copied" << std::endl;
	return (*this);
}
WrongCat::~WrongCat(){
	std::cout << "WrongCat is destroyed" << std::endl;
}

std::string WrongCat::getType(void) const{
	return (type);
}

void WrongCat::makeSound(void) const{
	std::cout << "Meow" << std::endl;
}
