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
	if (index > number)
		std::cout << "out of range!!" << std::endl;
	else if (index > 0)
	{
		std::cout.width(10);
		std::cout << index << " | ";
		array[index - 1].showContact();
	}
	else if (!index)
	{
		for (int i = 0; i < number; i ++)
		{
			std::cout.width(10);
			std::cout << i + 1 << " | ";
			array[i].showContact();
		}
	}
	//std::cin.ignore();
}

