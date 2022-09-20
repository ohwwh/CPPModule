#include "Ice.hpp"

Ice::Ice(){
	type = "ice";
}
Ice::Ice(const Ice& a)  : AMateria(a){}

Ice& Ice::operator=(const Ice& a){
	type = a.type;
	return (*this);
}
Ice::~Ice(){}

Ice* Ice::clone() const{
	Ice* ret = new Ice();
	return (ret);
}
void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " <<  target.getName() << " *" << std::endl;
}