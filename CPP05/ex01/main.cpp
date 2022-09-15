#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void){
	Bureaucrat b1;
	std::cout << b1 << std::endl;
	b1.relagation();
	std::cout << b1 << std::endl;
	try{
		Bureaucrat b2("Obama", 0);
	}
	catch (std::exception& e){std::cout << e.what();}
	try{
		Bureaucrat b3("Billy", 160);
	}
	catch (std::exception& e){std::cout << e.what();}
	Bureaucrat b4("test", 1);
	std::cout << b4 << std::endl;
	b4.promotion();
	std::cout << b4 << std::endl;
	Bureaucrat b5("test2", 50);
	b5.promotion();
	std::cout << b5 << std::endl;
	b5.relagation();
	std::cout << b5 << std::endl;
	Form f1("form1", 1);
	b5.signForm(f1);
	b4.signForm(f1);
}