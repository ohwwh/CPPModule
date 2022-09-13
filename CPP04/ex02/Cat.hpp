#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	Brain* brain;
	public:
		Cat();
		Cat(const Cat& a);
		Cat& operator=(const Cat& a);
		~Cat();

		std::string getIdea() const;
		void makeSound(void) const;
};

#endif