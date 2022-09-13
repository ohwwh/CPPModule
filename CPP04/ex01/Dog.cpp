#include "Dog.hpp"

Dog::Dog(){
	type = "Dog";
	std::cout << "Dog is created" << std::endl;
	brain = new Brain("dog");
}
Dog::Dog(const Dog& a){
	type = a.type;
	/*brain = new Brain();
	for (int i = 0; i < 100; i ++)
		brain[i] = a.brain[i];*/
	std::cout << "Dog is copied and created" << std::endl;
	brain = new Brain(*(a.brain));
}
Dog& Dog::operator=(const Dog& a){
	type = a.type;
	/*brain = new Brain();
	for (int i = 0; i < 100; i ++)
		brain[i] = a.brain[i];*/
	std::cout << "Dog is copied" << std::endl;
	brain = new Brain(*(a.brain));
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