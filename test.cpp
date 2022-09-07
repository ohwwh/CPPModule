#include <iostream>

class Base{
	protected:
		std::string Name;
	public:
		Base(){Name = "BASE";}
		void what(){std::cout << Name << std::endl;}
};

class Derived : public Base{
	std::string Name;
	public:
		Derived(){Name = "DERIVED";}
};

int main(void)
{
	Base base;
	Derived der;
	base.what();
	der.what();
}