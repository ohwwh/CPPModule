#include "Cat.hpp"

Cat::Cat(){
	type = "Cat";
	std::cout << "Cat is created" << std::endl;
	brain = new Brain("cat");
}
Cat::Cat(const Cat& a) : Animal(a) {
	std::cout << "Cat is copied and created" << std::endl;
	brain = new Brain(*(a.brain));
}
Cat& Cat::operator=(const Cat& a){
	if (&a == this)
		return (*this);
	type = a.type;
	std::cout << "Cat is copied" << std::endl;
	brain = new Brain(*(a.brain));
	return (*this);
	// 만약 인자로 자기 자신이 들어온다면?? leak 발생
}
Cat::~Cat(){
	delete brain;
	std::cout << "Cat is destroyed" << std::endl;
}

std::string Cat::getIdea() const{
	return (brain->getIdea());
}

void Cat::makeSound(void) const{
	std::cout << "Meow" << std::endl;
}