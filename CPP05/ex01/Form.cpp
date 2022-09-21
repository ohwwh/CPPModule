#include "Form.hpp"

const char* Form::gradeTooHighException::what(void) const throw(){
	return ("Form grade is too high\n");
}

const char* Form::gradeTooLowException::what(void) const throw(){
	return ("Form grade is too low\n");
}

Form::Form() : name("default"), sign(false), grade_sign(150), grade_exec(150){}

Form::Form(const Form& b) : name(b.name), sign(false), grade_sign(b.grade_sign), grade_exec(b.grade_exec){}

Form& Form::operator=(const Form& b){ 
	(void)b;
	return (*this);}

Form::~Form(){}

Form::Form(const std::string name, int grade_sign, int grade_exec) : name(name), sign(false), grade_sign(grade_sign), grade_exec(grade_exec){
	if (grade_sign < 1 || grade_exec < 1)
		throw gradeTooHighException();
	if (grade_exec > 150 || grade_sign > 150)
		throw gradeTooLowException();
}

const std::string Form::getName() const{
	return (name);
}

int Form::getGradeSign() const{
	return (grade_sign);
}

int Form::getGradeExec() const{
	return (grade_exec);
}


bool Form::getSign() const{
	return (sign);
}

void Form::beSigned(const Bureaucrat& b){
	if (b.getGrade() > grade_sign)
		throw gradeTooHighException();
	else
		sign = true;
}

std::ostream& operator<<(std::ostream& o, const Form& f){
	return (o << f.getName() << ", form grade to be signed: " << f.getGradeSign() << ", form grade to be executed: " 
	<< f.getGradeExec() << ", signed: " << f.getSign());
}