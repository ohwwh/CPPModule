#include "Intern.hpp"


int main(void){
	Bureaucrat b("Billy", 150);
	Intern i;
	Form* f1 = i.makeForm("ShrubberyCreationForm", "Billy");
	Form* f2 = i.makeForm("RobotomyRequestForm", "Billy");
	Form* f3 = i.makeForm("PresidentialPardonForm", "Billy");
	Form* f4 = i.makeForm("PresidentilPardonForm", "Billy");
	
}