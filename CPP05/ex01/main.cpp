#include "Bureaucrat.hpp"

int main(void){
	try{
		Bureaucrat b1;
		std::cout << b1 << std::endl;
		Bureaucrat b2("Obama", 0);
		Bureaucrat b3("Billy", 160);
		Bureaucrat b4("test", 1);
		b1.relagation();
		b4.promotion();
	}
	catch (std::exception& e){std::cout << e.what();}
}