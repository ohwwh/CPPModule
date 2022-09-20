#include "Cure.hpp"

Cure::Cure(){
	type = "cure";
}
Cure::Cure(const Cure& a) : AMateria(a){}

Cure& Cure::operator=(const Cure& a){
	type = a.type;
	return (*this);
}
Cure::~Cure(){}

Cure* Cure::clone() const{
	Cure* ret = new Cure();
	return (ret);
}
void Cure::use(ICharacter& target){
	std::cout << "* heals " <<  target.getName() << "'s wounds *" << std::endl;
}