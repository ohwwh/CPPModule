#include "MutantStack.hpp"
#include <deque>
#include <iostream>
#include <stack>

void test_iterator(MutantStack<int> m) {
	MutantStack<int>::iterator it = m.begin();
	MutantStack<int>::iterator e = m.end();
	while (it != e)
		std::cout << *(it++) << std::endl;
}

void test_reverse_iterator(MutantStack<int> m) {
	MutantStack<int>::reverse_iterator rit = m.rbegin();
	MutantStack<int>::reverse_iterator re = m.rend();
	while (rit != re)
		std::cout << *(rit++) << std::endl;
}

void test_const_iterator(MutantStack<int> m) {
	MutantStack<int>::iterator it = m.begin();
	std::cout << *it << std::endl;
	*it = 9;
	std::cout << *it << std::endl;
	MutantStack<int>::const_iterator cit = m.begin();
	//*cit = 9;
	std::cout << *cit << std::endl;
}

void test_const_reverse_iterator(MutantStack<int> m) {
	MutantStack<int>::reverse_iterator it = m.rbegin();
	std::cout << *it << std::endl;
	*it = 0;
	std::cout << *it << std::endl;
	MutantStack<int>::const_reverse_iterator cit = m.rbegin();
	//*cit = 0;
	std::cout << *cit << std::endl;
}

int main(void) {
	std::deque<int> d;
	for (int i = 0; i < 10; i ++)
		d.push_back(i);
	MutantStack<int> m(d);
	test_iterator(m);
	std::cout << "\n-------------------\n\n";
	test_reverse_iterator(m);
	std::cout << "\n-------------------\n\n";
	test_const_iterator(m);
	std::cout << "\n-------------------\n\n";
	test_const_reverse_iterator(m);

}