#include <iostream>
#include <sstream>
#include "Converter.hpp"

int main(int argc, char * argv[]){
	if (argc != 2)
		std::cout << "argument error!\n";
	Converter conv(argv[1]);
	std::cout << conv;
}