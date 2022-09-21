#ifndef INTERN_HPP
#define INTERN_HPP
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
	Form* (Intern::*forms[3])(std::string);
	std::string names[3];
	public:
		Intern();
		Intern(const Intern& b);
		Intern& operator=(const Intern& b);
		~Intern();

		Form* makeForm(std::string name_form, std::string name_target);
		Form* makeS(std::string name_target);
		Form* makeR(std::string name_target);
		Form* makeP(std::string name_target);

};

#endif