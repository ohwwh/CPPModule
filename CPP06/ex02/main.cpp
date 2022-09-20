#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <random>
#include <iostream>

Base* generate(void) {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0, 98);
	const int r = dis(gen);
	if (r % 3 == 0)
		return (new A());
	else if (r % 3 == 1)
		return (new B());
	else
		return (new C());
}

void identify(Base* p){
	if (dynamic_cast<A *>(p))
		std::cout << "this is A\n";
	else if (dynamic_cast<B *>(p))
		std::cout << "this is B\n";
	else if (dynamic_cast<C *>(p))
		std::cout << "this is C\n";
	else
		std::cout << "what's this type??\n";
}

/*void try_A(Base& r){
	try{
		dynamic_cast<A&>(r);
		std::cout << "this is A\n";
	}
	catch(std::exception e){}
}*/

void identify(Base& r){
	try{
		(void)dynamic_cast<A&>(r);
		std::cout << "this is A\n";
	}
	catch(std::exception e){}
	try{
		(void)dynamic_cast<B&>(r);
		std::cout << "this is B\n";
	}
	catch(std::exception e){}
	try{
		(void)dynamic_cast<C&>(r);
		std::cout << "this is C\n";
	}
	catch(std::exception e){}
}

int main(void){
	Base* b = generate();
	Base&b2 = *b;
	identify(b);
	identify(b2);
}