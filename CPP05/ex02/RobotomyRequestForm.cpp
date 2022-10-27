#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
: Form("RobotomyRequestForm", 72, 45), target("target_default"){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& b)
: Form(b.name, b.grade_sign, b.grade_exec), target(b.target){}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(const std::string target_name)
: Form("RobotomyRequestForm", 72, 45), target(target_name){};

void RobotomyRequestForm::execute(const Bureaucrat& b) const{
	check_execute(b);
	std::cout << "drilling sound......\n";
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0, 99);
	if (dis(gen) % 2 == 0)
		std::cout << target << " has been robotomized\n";
	else
		std::cout << "Romotomy faild: " << target << " ran away\n";
}