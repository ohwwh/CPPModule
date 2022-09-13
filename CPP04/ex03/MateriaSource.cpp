#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i ++)
		slot[i] = 0;
}
MateriaSource::MateriaSource(const MateriaSource& c){
	for (int i = 0; i < 4; i ++){
		if (!c.slot[i])
			slot[i] = 0;
		else
			slot[i] = c.slot[i]->clone();
	}
}
MateriaSource& MateriaSource::operator=(const MateriaSource& c){
	for (int i = 0; i < 4; i ++){
		if (slot[i]){
			delete slot[i];
			slot[i] = 0;
		}
	}
	for (int i = 0; i < 4; i ++){
		if (!c.slot[i])
			slot[i] = 0;
		else
			slot[i] = c.slot[i]->clone();
	}
}
MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i ++)
		slot[i] = 0;
}

void MateriaSource::learnMateria(AMateria* m){
	for (int i = 0; i < 4; i ++)
	{
		if (!slot[i]){
			slot[i] = m;
			break;
		}
		if (i == 3)
			std::cout << "slot is full\n";
	}
}
AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i ++)
	{
		if (slot[i]->getType() == type)
			return (slot[i]->clone());
		if (i == 3)
			std::cout << "No such Materia\n";
	}
}