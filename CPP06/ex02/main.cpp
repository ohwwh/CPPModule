#include "Base.hpp"
#include "Derived.hpp"
#include <iostream>

extern unsigned int random_generator(int range);

Base* generate(void) {
	/*std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0, 98);
	const int r = dis(gen);*/
	const unsigned int r = random_generator(98);
	if (r % 3 == 0)
		return (new A());
	else if (r % 3 == 1)
		return (new B());
	else
		return (new C());
}

void identify(Base* p){
	if (dynamic_cast<A *>(p)){
		std::cout << "this is A\n";
		return ;
	}
	else if (dynamic_cast<B *>(p)){
		std::cout << "this is B\n";
		return ;
	}
	else if (dynamic_cast<C *>(p)){
		std::cout << "this is C\n";
		return ;
	}
	else
		std::cout << "what's this type??\n";
}


void identify(Base& r){
	try{
		(void)dynamic_cast<A&>(r);
		std::cout << "this is A\n";
		return ;
	}
	catch(std::exception &e){}
	try{
		(void)dynamic_cast<B&>(r);
		std::cout << "this is B\n";
		return ;
	}
	catch(std::exception &e){}
	try{
		(void)dynamic_cast<C&>(r);
		std::cout << "this is C\n";
		return ;
	}
	catch(std::exception &e){std::cout << "what's this type??\n";}
}

int main(void){
	try{
		Base* b = generate();
		Base& b2 = *b;
		F* f = new F();
		F& f2 = *f;
		identify(b);
		identify(b2);
		identify(f);
		identify(f2);
		identify(0);
		delete f;
		delete b;
	}
	catch(std::exception& e){ std::cout << e.what() << std::endl; }
}
