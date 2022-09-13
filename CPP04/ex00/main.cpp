#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void){
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();
	Animal a;
	Cat c;
	a = c;
	a.makeSound();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	k->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
}