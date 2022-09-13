#ifndef ICE_HPP
#define ICE_HPP
#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria{
protected:
public:
	Ice();
	Ice(const Ice& a);
	Ice& operator=(const Ice& a);
	~Ice();

	Ice* clone() const;
	void use(ICharacter& target);
};

#endif