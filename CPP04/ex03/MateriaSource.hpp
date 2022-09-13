#include "IMateriaSource.hpp"

class MateriaSource : IMateriaSource
{
	AMateria* slot[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& m);
		MateriaSource& operator=(const MateriaSource& m);
		~MateriaSource();

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};