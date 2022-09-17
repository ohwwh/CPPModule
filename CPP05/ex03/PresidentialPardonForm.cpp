#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
 : Form("PresidentialPardonForm", 25, 5), target("target_default"){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& b)
: Form(b.name, b.grade_sign, b.grade_exec), target(b.target){}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const std::string target_name)
: Form("PresidentialPardonForm", 25, 5), target(target_name){};

void PresidentialPardonForm::execute(const Bureaucrat& b) const{
	if (sign == false)
		throw notSignedException();
	else if (b.getGrade() > grade_exec)
		throw gradeTooHighException();
	std::cout << target << " has been pardoned by Zaphod Beeblebrox\n";
}