#include <iostream>

int main(void){
	char a = 10;
	int& r = (int &)a;
	std::cout << r << std::endl;
	//int *p = (int *)&a;
	//std::cout << *p << std::endl;
}