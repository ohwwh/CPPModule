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
		if (std::cin.eof())
			return (1);
		command = upString(command);
		if (!command.compare("ADD"))
		{
			std::cout << "Firstname: ";
			std::getline(std::cin, fn);
			if (std::cin.eof())
				return (1);
			std::cout << "Lastname: ";
			if (std::cin.eof())
				return (1);
			std::getline(std::cin, ln);
			std::cout << "Nickname: ";
			std::getline(std::cin, nn);
			if (std::cin.eof())
				return (1);
			std::cout << "Number: ";
			std::getline(std::cin, num);
			if (std::cin.eof())
				return (1);
			std::cout << "Secret: ";
			std::getline(std::cin, sec);
			if (std::cin.eof())
				return (1);
			if (fn.empty() || ln.empty() || nn.empty() || num.empty() || sec.empty())
				std::cout << "There shouldn't be empty space in any field\n";
			else
			{
				con.new_Contact(fn, ln, nn, num, sec);
				phonebook.add(con);
				std::cout << "New Contact is successfully added to the PhoneBook!" << std::endl;
			}
		}
		else if (!command.compare("SEARCH"))
		{
			phonebook.show();
			std::cout << "Index: ";
			if (!(std::cin >> index))
			{
				if (std::cin.eof())
					return (1);
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

