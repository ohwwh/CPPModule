#include "Intern.hpp"


int main(void){
	std::cout << "\n------------------------------\n\n";
	Bureaucrat b("Billy", 150);
	Bureaucrat b2("Obama", 1);
	Intern i;



	Form* f1 = i.makeForm("ShrubberyCreationForm", "Billy");
	Form* f2 = i.makeForm("RobotomyRequestForm", "Billy");
	Form* f3 = i.makeForm("PresidentialPardonForm", "Billy");
	Form* f4 = i.makeForm("PresidentilPardonForm", "Billy");


	std::cout << "\n------------------------------\n\n";


	b.executeForm(*f1);
	b2.signForm(*f1);
	b2.executeForm(*f1);


	std::cout << "\n------------------------------\n\n";


	delete f1;
	delete f2;
	delete f3;
	delete f4;
}