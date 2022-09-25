#include "Array.hpp"

template <typename T>
Array<T>::Array(){
	size = 0;
	data = 0;
}

template <typename T>
Array<T>::Array(const Array& a){
	*this = a;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& a){
	if (&a == this)
		return (*this);
	if (size){
		delete[] data;
		data = 0;
	}
	size = a.size;
	if (!size)
		data = 0;
	else {
		data = new T[size];
		for (int i = 0; i < size; i ++)
			data[i] = a.data[i];
	}
	return (*this);
} //복사대입연산자 정의시 인자로 들어오는 것이 자기 자신인 경우에 대한 예외처리를 해주어야 한다.

template <typename T>
Array<T>::~Array(){
	if (!size)
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
	T = getDefault();
	size = n;
	if (!n)
		data = 0;
	else {
		data = new T[n];
		for (int i = 0; i < n; i ++)
			data[i] = T;
	}
}

template <typename T>
T& Array<T>::operator[](unsigned int n) const{
	if (n >= size || n < 0)
		throw outOfRange();
	return (data[n]);
}

template <typename T>
int Array<T>::size() const{
	return (size);
}