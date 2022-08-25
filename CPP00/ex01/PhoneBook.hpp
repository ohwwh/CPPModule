#include "Contact.hpp"

class PhoneBook{
	Contact array[8]; 
	int		number;
	int		oldest;

	public:
		PhoneBook();
		void add(Contact newContact);
		void search(int index);
};