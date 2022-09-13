#ifndef CURE_HPP
#define CURE_HPP
#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria{
protected:
public:
	Cure();
	Cure(const Cure& a);
	Cure& operator=(const Cure& a);
	~Cure();

	Cure(std::string const & type);
	Cure* clone() const;
	void use(ICharacter& target);
};

#endif