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
		array[oldest] = newContact;
		oldest = (oldest + 1) % 8;
	}
}

void PhoneBook::search(int index)
{
	if (index > number || index <= 0)
		std::cout << "out of range!!" << std::endl;
	else
		array[index - 1].showContact_all();
}

void PhoneBook::show()
{
	std::cout << "|";
	std::cout.width(13);
	std::cout << "index |";
	std::cout << std::setw(13) << "First Name |";
	std::cout.width(13);
	std::cout << "Last Name |";
	std::cout.width(13);
	std::cout << "Nickname |";
	std::cout << std::setw(13) << "Number |" << std::endl;
	std::cout << "------------------------------------------------------------------" << std::endl;
	for (int i = 0; i < number; i ++)
	{
		std::cout << "|";
		std::cout.width(11);
		std::cout << i + 1 << " | ";
		array[i].showContact();
	}
}

