#include "Converter.hpp"

Converter::Converter(){ init = 0; }
Converter::Converter(const Converter& c){ init = c.init; }
Converter& Converter::operator=(const Converter& c){ init = c.init; return (*this); }
Converter::~Converter(){}

Converter::Converter(const char str[]){
	init = strtod(str, 0);
}

char Converter::toChar() const{
	return (static_cast<char>(init));
}
int Converter::toInt() const{
	return (static_cast<int>(init));
}
float Converter::toFloat() const{
	float f = static_cast<float>(init);
	return (static_cast<float>(init));
}

double Converter::toDouble() const{
	return (init);
}