#ifndef INTERN_HPP
#define INTERN_HPP
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
	std::string forms[3];
	public:
		Intern();
		Intern(const Intern& b);
		Intern& operator=(const Intern& b);
		~Intern();

		Form* makeForm(std::string name_form, std::string name_target);
};

#endif