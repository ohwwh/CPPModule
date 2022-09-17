#include <iostream>
#include <sstream>
#include "Converter.hpp"

int main(int argc, char * argv[]){
	const char str[100] = "NaN";
	Converter conv(str);
	std::cout << conv.toChar() << std::endl;
	std::cout << conv.toInt() << std::endl;
	std::cout << conv.toFloat() << std::endl;
	std::cout << conv.toDouble() << std::endl;
}