#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal{
	public:
		Cat();
		Cat(const Cat& a);
		Cat& operator=(const Cat& a);
		~Cat();

		void makeSound(void) const;
};

#endif