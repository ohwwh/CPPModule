#include "PhoneBook.hpp"

std::string upString(std::string str){
	const int l = str.length();
	for (int j = 0; j < l; j ++)
		str[j] = std::toupper(str[j]);
	return (str);
}

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
		command = upString(command);
		if (!command.compare("ADD")) //대문자로 바꿔
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
			phonebook.add(con);
			std::cout << "New Contact is successfully added to the PhoneBook!" << std::endl;
		}
		else if (!command.compare("SEARCH"))
		{
			phonebook.show();
			std::cout << "Index: ";
			if (!(std::cin >> index))
			{
				std::cout << "Invalid: Index number should be a number\n";
				std::cin.clear();
			}
			else
				phonebook.search(index);
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			//이건 왜? cin은 공백이나 개행 전까지만 입력받고 나머지를 버퍼에 남기는데, 이걸 그 다음 getline이 읽어버린다. 따라서 ignore해야 함
		}
		else if (!command.compare("EXIT"))
			return (1);
		else
			std::cout << "Undefined Command: Type again" << std::endl;
	}
}

