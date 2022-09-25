#include "Dog.hpp"

Dog::Dog(){
	type = "Dog";
	std::cout << "Dog is created" << std::endl;
	brain = new Brain("dog");
}
Dog::Dog(const Dog& a) : Animal(a) {
	std::cout << "Dog is copied and created" << std::endl;
	type = a.type;
	brain = new Brain(*(a.brain));
}
Dog& Dog::operator=(const Dog& a){
	if (&a == this)
		return (*this);
	type = a.type;
	std::cout << "Dog is copied" << std::endl;
	brain = a.brain;
	return (*this);
}
Dog::~Dog(){
	delete brain;
	std::cout << "Dog is destroyed" << std::endl;
}

std::string Dog::getIdea() const{
	return (brain->getIdea());
}

void Dog::makeSound(void) const{
	std::cout << "Bark" << std::endl;
}