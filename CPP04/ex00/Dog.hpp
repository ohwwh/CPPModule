#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog();
		Dog(const Dog& a);
		Dog& operator=(const Dog& a);
		~Dog();

		void makeSound(void) const;
};

#endif