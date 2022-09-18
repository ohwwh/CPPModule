#include <iostream>
#include <sstream>
#include "Converter.hpp"

int main(int argc, char * argv[]){
	if (argc != 2)
		std::cout << "argument error!\n";
	//const char str[100] = "NaN";
	Converter conv(argv[1]);
	std::cout << conv << std::endl;
}