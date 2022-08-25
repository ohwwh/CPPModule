#include "Contact.hpp"

std::string truncate(std::string str)
{
	if (str.length() > 10)
		str.resize(10);
	return (str);
}

Contact::Contact()
{
	firstname = "\0";
	lastname = "\0";
	nickname = "\0";
	number = "\0";
	secret = "\0";
}

void Contact::new_Contact(std::string fn, std::string ln, std::string nn, std::string num, std::string sec){
	firstname = fn;
	lastname = ln;
	nickname = nn;
	number = num;
	secret = sec;
}
void Contact::showContact(){
	std::cout.width(10);
	std::cout << truncate(firstname) << " | ";
	std::cout.width(10);
	std::cout << truncate(lastname) << " | ";
	std::cout.width(10);
	std::cout << truncate(nickname) << " | ";
	std::cout.width(10);
	std::cout << truncate(number) << std::endl;
	/*std::cout.width(10);
	std::cout << truncate(secret) << "\n";*/
}