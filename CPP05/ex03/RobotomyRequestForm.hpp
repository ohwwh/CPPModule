#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
#include <random>

class RobotomyRequestForm : public Form{
	const std::string target;
	RobotomyRequestForm& operator=(const Form& b);
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& b);
		~RobotomyRequestForm();

		RobotomyRequestForm(const std::string target_name);
		void execute(const Bureaucrat& b) const;
};

#endif