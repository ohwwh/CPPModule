#include "Form.hpp"

const char* Form::gradeTooHighException::what(void) const throw(){
	return ("Form: grade is too high\n");
}

const char* Form::gradeTooLowException::what(void) const throw(){
	return ("Form: grade is too low\n");
}

Form::Form() : name("default"), sign(false), grade(150){}

Form::Form(const Form& b) : name(b.name), sign(false), grade(b.grade){}

//Form& Form::operator=(const Form& b){}

Form::~Form(){}

Form::Form(const std::string name, int grade) : name(name), sign(false), grade(grade){
	if (grade < 1)
		throw gradeTooHighException();
	if (grade > 150)
		throw gradeTooLowException();
}

const std::string Form::getName() const{
	return (name);
}

int Form::getGrade() const{
	return (grade);
}

bool Form::getSign() const{
	return (sign);
}

void Form::beSigned(const Bureaucrat& b){
	if (b.getGrade() > grade)
		throw gradeTooLowException();
	else
		sign = true;
}

std::ostream& operator<<(std::ostream& o, const Form& f){
	return (o << f.getName() << ", bureaucrat grade " << f.getGrade() << ", signed: " << f.getSign());
}