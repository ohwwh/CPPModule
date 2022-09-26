#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <stdexcept>
#include <iostream>
#include <vector>

template <typename T>
typename T::iterator easyfind(T t, int i);

#include "easyfind.tpp"
#endif