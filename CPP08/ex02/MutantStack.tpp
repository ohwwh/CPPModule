#include "MutantStack.hpp"

template <typename T, typename _container>
MutantStack<T, _container>::MutantStack() : std::stack<T, _container>() {}

template <typename T, typename _container>
MutantStack<T, _container>::MutantStack(const MutantStack& m) {
	*this = m;
}

template <typename T, typename _container>
MutantStack<T, _container>& MutantStack<T, _container>::operator=(const MutantStack& m) {
	if (&m != this)
		this->c = m.c;
	return (*this);
}

template <typename T, typename _container>
MutantStack<T, _container>::~MutantStack() {
}

template <typename T, typename _container>
MutantStack<T, _container>::MutantStack(const _container& c) : std::stack<T, _container>(c) {
}


template <typename T, typename _container>
typename MutantStack<T, _container>::iterator MutantStack<T, _container>::begin(void) {
	return (this->c.begin());
}

template <typename T, typename _container>
typename MutantStack<T, _container>::iterator MutantStack<T, _container>::end(void) {
	return (this->c.end());
}

template <typename T, typename _container>
typename MutantStack<T, _container>::reverse_iterator MutantStack<T, _container>::rbegin(void) {
	return (this->c.rbegin());
}

template <typename T, typename _container>
typename MutantStack<T, _container>::reverse_iterator MutantStack<T, _container>::rend(void) {
	return (this->c.rend());
}
template <typename T, typename _container>
typename MutantStack<T, _container>::const_iterator MutantStack<T, _container>::cbegin(void) {
	return (this->c.cbegin());
}

template <typename T, typename _container>
typename MutantStack<T, _container>::const_iterator MutantStack<T, _container>::cend(void) {
	return (this->c.cend());
}

template <typename T, typename _container>
typename MutantStack<T, _container>::const_reverse_iterator MutantStack<T, _container>::crbegin(void) {
		return (this->c.crbegin());
}

template <typename T, typename _container>
typename MutantStack<T, _container>::const_reverse_iterator MutantStack<T, _container>::crend(void) {
	return (this->c.crend());
}
