#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
 : Form("PresidentialPardonForm", 25, 5), target("target_default"){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& b)
: Form(b.name, b.grade_sign, b.grade_exec), target(b.target){}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const std::string target_name)
: Form("PresidentialPardonForm", 25, 5), target(target_name){};

void PresidentialPardonForm::execute(const Bureaucrat& b) const{
	check_execute(b);
	std::cout << target << " has been pardoned by Zaphod Beeblebrox\n";
}