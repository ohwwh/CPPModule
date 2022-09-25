#include "Cat.hpp"

Cat::Cat(){
	type = "Cat";
	std::cout << "Cat is created" << std::endl;
	brain = new Brain("cat");
}
Cat::Cat(const Cat& a) : Animal(a) {
	std::cout << "Cat is copied and created" << std::endl;
	type = a.type;
	brain = new Brain(*(a.brain));
}
Cat& Cat::operator=(const Cat& a){
	if (&a == this)
		return (*this);
	type = a.type;
	std::cout << "Cat is copied" << std::endl;
	/*ret = new Brain(*(a.brain));
	if (brain){
		delete brain;
		brain = 0;
	}
	brain = ret;*/
	brain = a.brain;
	return (*this);
	// 만약 인자로 자기 자신이 들어온다면?? leak 발생
	//이거 완전 제대로 잘못되었는데? delete하는 과정이 없잖아
	//아니, delete할 것도 없이 그냥 brain을 대입연산자로 복사해 넣으면 된다. 이미 할당은 되어 있으니까......
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