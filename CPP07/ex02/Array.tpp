#include "Array.hpp"

template <typename T>
const char* Array<T>::outOfRange::what(void) const throw(){
	return ("out of range!");
}

template <typename T>
Array<T>::Array(){
	_size = 0;
	data = 0;
}

template <typename T>
Array<T>::Array(const Array& a){
	_size = 0;
	data = 0;
	*this = a;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& a){
	if (&a == this)
		return (*this);
	if (_size){
		delete[] data;
		data = 0;
	}
	_size = a._size;
	if (!_size)
		data = 0;
	else {
		data = new T[_size];
		for (unsigned int i = 0; i < _size; i ++)
			data[i] = a.data[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array(){
	if (!_size)
		return ;
	delete[] data;
	data = 0;	
}

template <typename T>
T Array<T>::getDefault(){
	T ret;
	T* ptr = new T();
	ret = *ptr;
	delete ptr;
	return (ret);
}

template <typename T>
Array<T>::Array(unsigned int n){
	T e = getDefault();
	_size = n;
	if (!n)
		data = 0;
	else {
		data = new T[n];
		for (unsigned int i = 0; i < n; i ++)
			data[i] = e;
	}
}

template <typename T>
const T& Array<T>::operator[](unsigned int n) const{
	if (n >= _size || n < 0)
		throw outOfRange();
	return (data[n]);
}

template <typename T>
T& Array<T>::operator[](unsigned int n){
	if (n >= _size || n < 0)
		throw outOfRange();
	return (data[n]);
}

template <typename T>
int Array<T>::size() const{
	return (_size);
}