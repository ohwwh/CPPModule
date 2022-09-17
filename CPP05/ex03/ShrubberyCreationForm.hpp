#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form{
	const std::string target;
	ShrubberyCreationForm& operator=(const Form& b);
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& b);
		~ShrubberyCreationForm();
		
		ShrubberyCreationForm(const std::string target_name);
		void execute(const Bureaucrat& b) const;
};

#endif