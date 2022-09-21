#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void){
	Bureaucrat b1("Billy", 150), b2("James", 50), b3("Charles", 10), b4("Obama", 1);
	ShrubberyCreationForm s("Billy's house");
	RobotomyRequestForm r("Billy");
	PresidentialPardonForm p("Billy");


	std::cout << "\n------------------------------\n\n";


	b1.executeForm(s);
	b2.signForm(s);
	b1.executeForm(s);
	b2.executeForm(s);


	std::cout << "\n------------------------------\n\n";


	b2.executeForm(r);
	b2.signForm(r);
	b2.executeForm(r);
	b3.executeForm(r);


	std::cout << "\n------------------------------\n\n";


	b3.executeForm(p);
	b3.signForm(p);
	b3.executeForm(p);
	b4.executeForm(p);
	std::cout << "\n------------------------------\n\n";
}