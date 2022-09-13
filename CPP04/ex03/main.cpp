#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"

int main(void){
	Ice ice;
	Cure cure;
	AMateria mat = ice;
	ice = cure;
}