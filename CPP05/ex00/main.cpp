#include "Bureaucrat.hpp"

int main(void){
	try{
		Bureaucrat b1;
		std::cout << b1 << std::endl;
		b1.relagation();
	}
	catch (std::exception& e){std::cout << e.what();}
	try{
		Bureaucrat b2("Obama", 0);
	}
	catch (std::exception& e){std::cout << e.what();}
	try{
		Bureaucrat b3("Billy", 160);
	}
	catch (std::exception& e){std::cout << e.what();}
	try{
		Bureaucrat b4("test", 1);
		b4.promotion();
	}
	catch (std::exception& e){std::cout << e.what();}
}