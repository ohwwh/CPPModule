#include "Bureaucrat.hpp"

const char* Bureaucrat::gradeTooHighException::what(void) const throw(){
	return ("Bureau: grade is too high\n");
}

const char* Bureaucrat::gradeTooLowException::what(void) const throw(){
	return ("Bureau: grade is too low\n");
}

Bureaucrat::Bureaucrat() : name("default"), grade(150){}

Bureaucrat::Bureaucrat(const Bureaucrat& b) : name(b.name), grade(b.grade){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b){
	(void)b;
	return (*this); 
}

Bureaucrat::~Bureaucrat(){ std::cout << name << " is destroyed\n"; }

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


void Bureaucrat::promotion(){
	try { 
		if (grade <= 1)
			throw gradeTooHighException();
		grade --;
	}
	catch (std::exception& e){std::cout << e.what();}
}

void Bureaucrat::relagation(){
	try { 
		if (grade >= 150)
			throw gradeTooLowException();
		grade ++;
	}
	catch (std::exception& e){std::cout << e.what();}
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& b){
	return (o << b.getName() << ", bureaucrat grade " << b.getGrade());
}