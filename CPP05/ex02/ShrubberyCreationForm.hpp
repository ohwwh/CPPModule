#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form{
	ShrubberyCreationForm& operator=(const Form& b);
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& b);
		~ShrubberyCreationForm();
		void execute(const Bureaucrat& b) const;
};

#endif