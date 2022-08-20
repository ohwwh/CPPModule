#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	number = 0;
	oldest = 0;
}

void PhoneBook::add(Contact newContact){
	if (number < 8)
		array[number ++] = newContact;
	else
	{
		array[(oldest % 8)] = newContact;
		oldest ++;
	}
}

