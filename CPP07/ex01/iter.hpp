#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>
void iter(T* arr, int size, void (*f)(T&)) {
	for (int i = 0; i < size; i ++){
		f(arr[i]);
	}
}

template <typename T>
void print(T& e){
	std::cout << e << " ";
}

template <typename T>
void plus(T& e){
	e ++;
}

#endif