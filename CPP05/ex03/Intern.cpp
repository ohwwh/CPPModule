#include "Intern.hpp"

Intern::Intern(){
	forms[0] = "ShrubberyCreationForm";
	forms[1] = "RobotomyRequestForm";
	forms[2] = "PresidentialPardonForm";
}
Intern::Intern(const Intern& b){
	forms[0] = b.forms[0];
	forms[1] = b.forms[1];
	forms[2] = b.forms[2];
}
Intern& Intern::operator=(const Intern& b){
	(void)b;
	return (*this);
}
Intern::~Intern(){}

Form* Intern::makeForm(std::string name_form, std::string name_target){
	int j = 3;
	Form* ret;

	for (int i = 0; i < 3; i ++){
		if (name_form == forms[i]){
			j = i;
			break ;
		}
	}
	switch (j){
		case 0:
			ret =  (new ShrubberyCreationForm(name_target));
			break ;
		case 1:
			ret = (new RobotomyRequestForm(name_target));
			break ;
		case 2:
			ret = (new PresidentialPardonForm(name_target));
			break ;
		default:
			ret = 0;
	}
	if (j < 3)
		std::cout << "Intern creates " << forms[j] << std::endl;
	else
		std::cout << name_form << ": such type doesn't exist" << std::endl;
	return (ret);
}
