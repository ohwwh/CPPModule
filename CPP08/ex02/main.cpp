#include "MutantStack.hpp"
#include <deque>
#include <iostream>
#include <stack>
#include <deque>

void test_iterator(MutantStack<int> m) {
	MutantStack<int>::iterator it = m.begin();
	MutantStack<int>::iterator e = m.end();
	while (it != e)
		std::cout << *(it++) << std::endl;
}

void test_iterator_deque(std::deque<int> d)
{
	std::deque<int>::iterator it = d.begin();
	std::deque<int>::iterator e = d.end();
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
	std::cout << "\n------test_iterator-------\n\n";
	test_iterator(m);
	std::cout << "\n------test_iterator_deque-------\n\n";
	test_iterator_deque(d);
	std::cout << "\n------test_reverse_iterator-------\n\n";
	test_reverse_iterator(m);
	std::cout << "\n------test_const_iterator-------\n\n";
	test_const_iterator(m);
	std::cout << "\n------test_const_reverse_iterator-----\n\n";
	test_const_reverse_iterator(m);

}