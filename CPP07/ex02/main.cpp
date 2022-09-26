#include "Array.hpp"
#include "Array.tpp"

int main(void){
	Array<int> arr = Array<int>(5);
	arr[3] = 2;
	arr[0] = 1;
	Array<int>* ptr = &arr;
	*ptr = arr;
	//arr = arr;
	std::cout << (*ptr)[3] << std::endl;
	std::cout << arr[3] << std::endl;
	arr[3] = 7;
	std::cout << arr[3] << std::endl;
	try{
		arr[7];
	}
	catch (std::exception& e){ std::cout << e.what() << std::endl; }
	
}