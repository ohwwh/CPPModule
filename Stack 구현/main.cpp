#include "MutantStack.hpp"
#include <deque>
#include <iostream>
#include <stack>

class test {
	int num;
	public:
		test() {num=0;}
		void inc() {num++;}
		int get() {return num;}
};

int main(void) {
	/*std::deque<int> d(3, 100);
	MutantStack<int> m(d);
	MutantStack<int>::iterator it = m.begin();
	std::cout << *it << std::endl;
	std::cout << *(it++) << std::endl;*/

	std::deque<test> dq(3);
	std::stack<test> c(dq);
	c.top();
	std::cout << c.top().get() << std::endl;
}