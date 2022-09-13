#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& a);
		WrongAnimal& operator=(const WrongAnimal& a);
		~WrongAnimal();

		std::string getType(void) const;
		void makeSound(void) const;
};

#endif