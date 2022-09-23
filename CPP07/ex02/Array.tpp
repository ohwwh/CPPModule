#include "Array.hpp"

template <typename T>
Array<T>::Array(){
	size = 0;
	data = 0;
}

template <typename T>
Array<T>::Array(const Array& a){
	
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& a){
	if (&a == this)
		return ;
	size = a.size;
	data = 
} //복사대입연산자 정의시 인자로 들어오는 것이 자기 자신인 경우에 대한 예외처리를 해주어야 한다.

template <typename T>
Array<T>::~Array(){
	
}

template <typename T>
Array<T>::Array(unsigned int n){
	size = n;
	data = new T[n];
}