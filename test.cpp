#include <iostream>

int main(void){
	char a = 10;
	int& r = (int &)a;
	std::cout << r << std::endl;
	//static_cast<char& >(r)
	//int *p = (int *)&a;
	//std::cout << *p << std::endl;
}