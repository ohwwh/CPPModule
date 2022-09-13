#ifndef ICE_HPP
#define ICE_HPP
#include <iostream>
#include "ICharacter.hpp"

class Ice : public AMateria{
protected:
public:
	Ice();
	Ice(const Ice& a);
	Ice& operator=(const Ice& a);
	~Ice();

	std::string const & getType() const; //Returns the materia type
	Ice* clone() const;
	void use(ICharacter& target);
};

#endif