#include "AMateria.hpp"

class Character : public ICharacter{
	std::string _name;
	AMateria* slot[4];
	AMateria* inventory[4];
	public:
		Character();
		Character(const Character& c);
		Character& operator=(const Character& c);
		~Character();

		Character(std::string name);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		void clear_inventory(void);
};