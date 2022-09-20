#include "Dog.hpp"

Dog::Dog(){
	type = "Dog";
	std::cout << "Dog is created" << std::endl;
}
Dog::Dog(const Dog& a) : Animal(a) {
	std::cout << "Dog is copied and created" << std::endl;
}
Dog& Dog::operator=(const Dog& a){
	type = a.type;
	std::cout << "Dog is copied" << std::endl;
	return (*this);
}
Dog::~Dog(){
	std::cout << "Dog is destroyed" << std::endl;
}

void Dog::makeSound(void) const{
	std::cout << "Bark" << std::endl;
}