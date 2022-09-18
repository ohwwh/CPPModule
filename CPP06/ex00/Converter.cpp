#include "Converter.hpp"

Converter::Converter(){ init = 0; }
Converter::Converter(const Converter& c){ init = c.init; }
Converter& Converter::operator=(const Converter& c){ init = c.init; return (*this); }
Converter::~Converter(){}

Converter::Converter(const char str[]){
	init = strtod(str, 0);
}

double Converter::getInit() const{
	return (init);
}

char Converter::toChar() const{
	return (static_cast<char>(init));
}
int Converter::toInt() const{
	return (static_cast<int>(init));
}
float Converter::toFloat() const{
	return (static_cast<float>(init));
}

double Converter::toDouble() const{
	return (init);
}

std::ostream& operator<<(std::ostream& os, const Converter& c){
	if (std::isnan(c.getInit()) || std::isinf(c.getInit()))
	os << c.toChar() << std::endl << c.toInt() << std::endl << c.toFloat() << "f" << std::endl
	<< c.toDouble();
	return (os);
}