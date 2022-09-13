#include "AMateria.hpp"

AMateria::AMateria(){
	type = "AMateria";
}
AMateria::AMateria(const AMateria& a){
	type = a.type;
}
AMateria& AMateria::operator=(const AMateria& a){
	type = a.type;
	return (*this);
}
AMateria::~AMateria(){}

std::string const & AMateria::getType() const{
	return (type);
}

void AMateria::use(ICharacter& target){
	std::cout << "* Unknown Materia *\n" << std::endl;
}