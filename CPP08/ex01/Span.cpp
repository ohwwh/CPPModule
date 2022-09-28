#include "Span.hpp"

const char* Span::containerFullException::what(void) const throw(){
	return ("Container is full");
}

const char* Span::noSpanException::what(void) const throw(){
	return ("Cannot find Span");
}

Span::Span() : v(0, 0) {}

Span::Span(const Span& s) : v(0, 0) {
	*this = s;
}

Span& Span::operator=(const Span& s){
	const size_t size = s.v.capacity();

	if (&s != this) {
		if (v.capacity() > size)
			v.resize(size);
		v = s.v;	
	}
	return (*this);
}

Span::~Span(){
	
}

Span::Span(unsigned int n) : v(0, 0) {
	v.reserve(n);
}

void Span::addNumber(int value){
	if (v.capacity() <= v.size())
		throw containerFullException();
	v.push_back(value);
}

int Span::shortestSpan(){
	const size_t size = v.size();
	if (size == 0 || size == 1)
		throw noSpanException();
	std::vector<int> tmp = v;
	sort(tmp.begin(), tmp.end());
	std::adjacent_difference(tmp.begin(), tmp.end(), tmp.begin());
	return (*(std::min_element(++tmp.begin(), tmp.end())));
}

int Span::longestSpan(){
	const int size = v.size();
	if (size == 0 || size == 1)
		throw noSpanException();
	std::vector<int> tmp(v);
	/* 1번 방법: sort(tmp.begin(), tmp.end());
	return (*(--tmp.end()) - *tmp.begin());*/
	/*2번 방법: sort(tmp.begin(), tmp.end());
	return (tmp.back() - tmp.front());*/
	return (*(std::max_element(v.begin(), v.end())) 
	- *(std::min_element(v.begin(), v.end())));
}

void Span::showSpan() {
	if (!v.size()) {
		std::cout << "no element!" << std::endl;
		return ;
	}
	std::vector<int>::iterator it = v.begin();
	while (it != v.end())
		std::cout << *(it++) << " ";
	std::cout << std::endl;
}
