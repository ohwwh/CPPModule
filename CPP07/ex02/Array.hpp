#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template<typename T>
class Array{
	unsigned int _size;
	T* data;
	T getDefault();
	public:
		class outOfRange : public std::exception {
			public:
				const char* what(void) const throw();
		};
		Array();
		Array(const Array& a);
		Array& operator=(const Array& a);
		~Array();

		Array(unsigned int n);
		const T& operator[](unsigned int n) const;
		T& operator[](unsigned int n);
		int size() const;
};

#include "Array.tpp"
#endif