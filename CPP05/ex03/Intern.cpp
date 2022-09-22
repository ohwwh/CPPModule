#include "Intern.hpp"

Intern::Intern(){
	forms[0] = &Intern::makeS;
	forms[1] = &Intern::makeR;
	forms[2] = &Intern::makeP;
	names[0] = "ShrubberyCreationForm";
	names[1] = "RobotomyRequestForm";
	names[2] = "PresidentialPardonForm";

}
Intern::Intern(const Intern& b){
	*this = b;
}

Intern& Intern::operator=(const Intern& b){
	forms[0] = b.forms[0];
	forms[1] = b.forms[1];
	forms[2] = b.forms[2];
	names[0] = b.names[0];
	names[1] = b.names[1];
	names[2] = b.names[2];
	return (*this);
}
Intern::~Intern(){}

Form* Intern::makeS(std::string name_target){
	return (new ShrubberyCreationForm(name_target));
}
Form* Intern::makeR(std::string name_target){
	return (new RobotomyRequestForm(name_target));
}
Form* Intern::makeP(std::string name_target){
	return (new PresidentialPardonForm(name_target));
}

/*Form* Intern::makeForm(std::string name_form, std::string name_target){
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
}*/

Form* Intern::makeForm(std::string name_form, std::string name_target){

	for (int i = 0; i < 3; i ++){
		if (name_form == names[i]){
			std::cout << "Intern creates " << names[i] << std::endl;
			return ((this->*forms[i])(name_target));
		}
	}
	std::cout << name_form << ": such type doesn't exist" << std::endl;
	return (0);
}
