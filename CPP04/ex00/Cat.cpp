#include "Cat.hpp"

Cat::Cat(){
	type = "Cat";
	std::cout << "Cat is created" << std::endl;
}
Cat::Cat(const Cat& a) : Animal(a) {
	std::cout << "Cat is copied and created" << std::endl;
}
Cat& Cat::operator=(const Cat& a){
	type = a.type;
	std::cout << "Cat is copied" << std::endl;
	return (*this);
}
Cat::~Cat(){
	std::cout << "Cat is destroyed" << std::endl;
}

void Cat::makeSound(void) const{
	std::cout << "Meow" << std::endl;
}
