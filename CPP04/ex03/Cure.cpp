#include "Cure.hpp"

Cure::Cure(){
	type = "Cure";
}
Cure::Cure(const Cure& a){
	type = a.type;
}
Cure& Cure::operator=(const Cure& a){
	type = a.type;
}
Cure::~Cure(){}
std::string const & Cure::getType() const{
	return (type);
}
Cure* Cure::clone() const{
	Cure* ret = new Cure();
	return (ret);
}
void Cure::use(ICharacter& target){
	std::cout << "* heals " <<  target.getName() << "'s wounds *" << std::endl;
}