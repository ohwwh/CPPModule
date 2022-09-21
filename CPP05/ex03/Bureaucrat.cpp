#include "Bureaucrat.hpp"
#include "Form.hpp"


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

void Bureaucrat::signForm(Form& f){
	try{
		f.beSigned(*this);
		std::cout << name << " signed " << f.getName() << std::endl;
	}
	catch (std::exception& e){ std::cout << name << " couldn't sign " << f.getName() << 
	" because " << e.what(); }
}

void Bureaucrat::executeForm(const Form& f){
	try {
		f.execute(*this);
		std::cout << name << " executed " << f.getName() << std::endl;
	}
	catch (std::exception& e){ std::cout << name << " couldn't execute " << f.getName() << 
	" because " << e.what(); }
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& b){
	return (o << b.getName() << ", bureaucrat grade " << b.getGrade());
}