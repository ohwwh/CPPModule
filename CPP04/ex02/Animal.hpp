#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal& a);
		Animal& operator=(const Animal& a);
		virtual ~Animal();

		virtual std::string getIdea(void) const = 0;
		virtual std::string getType(void) const = 0;
		virtual void makeSound(void) const = 0;
};

#endif