#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include <string>
#include <iomanip>

class Contact{
	std::string firstname, lastname, nickname, number, secret;
	public:
		Contact();
		void new_Contact(std::string fn, std::string n, std::string nn, std::string num, std::string sec);
		void showContact();
		void showContact_all();
};

#endif