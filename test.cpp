#include <iostream>
#include <stack>

class test {
	int num;
	public:
		test() {num=0;}
		test(int n) {num=n;}
};

class Base {
	protected:
		test var;
	public:
		Base() : var() {}
};

class Derived : public Base {
	public:
		Derived() : var() {}
		
};

int main(void){
	std::stack<int> s1= std::stack<int>();
	std::stack<int> s2(s1);
}