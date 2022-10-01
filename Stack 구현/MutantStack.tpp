#include "MutantStack.hpp"

template <typename T, typename _container>
MutantStack<T, _container>::MutantStack() : c() {   
}

template <typename T, typename _container>
MutantStack<T, _container>::MutantStack(const MutantStack& m) {
	*this = m;
}

template <typename T, typename _container>
MutantStack<T, _container>& MutantStack<T, _container>::operator=(const MutantStack& m) {
	if (&m != this)
		c = m.c;
	return (*this);
}

template <typename T, typename _container>
MutantStack<T, _container>::~MutantStack() {
}

template <typename T, typename _container>
MutantStack<T, _container>::MutantStack(const container_type& c) : c(c) {
}

template <typename T, typename _container>
bool MutantStack<T, _container>::empty(void) const {

}

template <typename T, typename _container>
size_t MutantStack<T, _container>::size() const {
	
}

template <typename T, typename _container>
T& MutantStack<T, _container>::top() {

}

template <typename T, typename _container>
const T& MutantStack<T, _container>::top() const {

}

template <typename T, typename _container>
void MutantStack<T, _container>::push(const T& a) {
	c.push_back(a);
}

template <typename T, typename _container>
void MutantStack<T, _container>::pop() {
	c.pop_back();
}


template <typename T, typename _container>
typename MutantStack<T, _container>::iterator MutantStack<T, _container>::begin(void) {
	return (c.begin());
}

template <typename T, typename _container>
typename MutantStack<T, _container>::iterator MutantStack<T, _container>::end(void) {
	return (c.end());
}
