#include "Bureaucrat.hpp"

const char* Bureaucrat::gradeTooHighException::what(void) const throw(){
	return ("Bureau: grade is too high\n");
}

const char* Bureaucrat::gradeTooLowException::what(void) const throw(){
	return ("Bureau: grade is too low\n");
}

Bureaucrat::Bureaucrat() : name("default"), grade(150){}

Bureaucrat::Bureaucrat(const Bureaucrat& b) : name(b.name), grade(b.grade){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b){ return (*this); }

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade){
	if (grade < 1)
		throw gradeTooHighException();
	if (grade > 150)
		throw gradeTooLowException();
}

const std::string Bureaucrat::getName() const{
	return (name);
}

int Bureaucrat::getGrade() const{
	return (grade);
}

void Bureaucrat::try_promotion(){
	if (grade <= 1)
		throw gradeTooHighException();
	grade --;
}

void Bureaucrat::promotion(){
	try { try_promotion();}
	catch (std::exception& e){std::cout << e.what();}
}

void Bureaucrat::try_relagation(){
	if (grade >= 150)
		throw gradeTooLowException();
	grade ++;
}

void Bureaucrat::relagation(){
	try { try_relagation();}
	catch (std::exception& e){std::cout << e.what();}
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& b){
	return (o << b.getName() << ", bureaucrat grade " << b.getGrade());
}