#include <iostream>

int main(void){
	char a = 10;
	/*int& r = (int &)a;
	r = 5;*/
	int *p = (int *)&a;
	*p = 2555;
	std::cout << *p << std::endl;
}