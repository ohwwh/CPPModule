#include "PhoneBook.hpp"

int main(int argc, char *argv[])
{
	Contact con;
	PhoneBook phonebook;
	std::string fn, ln, nn, num, sec, command;
	int index;

	//std::cin >> sec; space 단위로 단어를 짤라서 입력받음.
	while (1)
	{
		std::cout << "Command: ";
		std::getline(std::cin, command);
		if (!command.compare("add"))
		{
			std::cout << "Firstname: ";
			std::getline(std::cin, fn);
			std::cout << "Lastname: ";
			std::getline(std::cin, ln);
			std::cout << "Nickname: ";
			std::getline(std::cin, nn);
			std::cout << "Number: ";
			std::getline(std::cin, num);
			std::cout << "Secret: ";
			std::getline(std::cin, sec);
			con.new_Contact(fn, ln, nn, num, sec);
			phonebook.add(con); //객체는 참조타입이 아니다. C++에서는 참조타입 원시타입 구분이 따로 없고 모두 원시타입이며, 포인터타입과 포인터가 아닌 타입(원시타입)으로 나뉨
			std::cout << "New Contact successfully added to the PhoneBook!" << std::endl;
		}
		else if (!command.compare("search"))
		{
			while (1)
			{
				std::cout << "Index: ";
				if (!(std::cin >> index))
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					break ;
				}
				else if (index < 0)
				{
					std::cin.ignore();
					break ;
				}
				else if (index >= 0)
					phonebook.search(index);
				std::cin.ignore();
			}
		}
		else if (!command.compare("exit"))
			return (1);
		else
			std::cout << "Undefined Command: Type again" << std::endl;
	}
}

