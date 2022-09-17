#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form{
	const std::string target;
	PresidentialPardonForm& operator=(const Form& b);
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& b);
		~PresidentialPardonForm();

		PresidentialPardonForm(const std::string target_name);
		void execute(const Bureaucrat& b) const;
};

#endif