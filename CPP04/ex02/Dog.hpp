#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	Brain* brain;
	public:
		Dog();
		Dog(const Dog& a);
		Dog& operator=(const Dog& a);
		~Dog();

		std::string getIdea() const;
		void makeSound(void) const;
};

#endif