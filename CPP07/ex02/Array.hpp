#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array{
	int size;
	T* data;
	public:
		Array();
		Array(const Array& a);
		Array& operator=(const Array& a);
		~Array();

		Array(unsigned int n);
};

#endif