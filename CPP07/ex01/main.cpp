#include "iter.hpp"

int main(void){
	int arr1[4] = {1, 2, 3, 4};
	const char arr2[4] = {'c', 'a', 'b', 'd'};

	iter<int>(arr1, 4, &(::print<int>));
	std::cout << std::endl;
	iter<const char>(arr2, 4, &(::print<const char>));
	std::cout << std::endl;
	iter<int>(arr1, 4, &(::plus<int>));

	iter(arr1, 4, &(::print));
	std::cout << std::endl;
	iter<int>(arr1, 4, &(::plus));
	iter(arr1, 4, &(::print));
	std::cout << std::endl;
}