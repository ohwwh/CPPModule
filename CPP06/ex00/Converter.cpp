#include "Converter.hpp"
#include <limits>

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

void Converter::printChar(std::ostream& os) const{
	if (std::isnan(init) || std::isinf(init))
		os << "impossible" << std::endl;
	else if (126 < init || 32 > init)
		os << "Non displayable" << std::endl;
	else
		os << static_cast<char>(init) << std::endl;
}
void Converter::printInt(std::ostream& os) const{
	if (std::isnan(init) || std::isinf(init) || std::numeric_limits<int>::max() < init || 
	std::numeric_limits<int>::min() > init)
		os << "impossible" << std::endl;
	else
		os << static_cast<int>(init) << std::endl;
}
void Converter::printFloat(std::ostream& os) const{
	if (!std::isnan(init) && !std::isinf(init) && 
	(std::numeric_limits<float>::max() < init || (-1 * std::numeric_limits<float>::max()) > init)){
		os << "impossible" << std::endl;
		return ;
	}
	os << static_cast<float>(init);
	if (!std::isnan(init) && !std::isinf(init) && round(init) == init) 
		os << ".0f" << std::endl;
	else
		os << "f" << std::endl;
}
void Converter::printDouble(std::ostream& os) const{
	if (!std::isnan(init) && !std::isinf(init) && 
	(std::numeric_limits<double>::max() < init || (-1 * std::numeric_limits<double>::max()) > init)){
		os << "impossible" << std::endl;
		return ;
	}
	os << static_cast<double>(init);
	if (!std::isnan(init) && !std::isinf(init) && round(init) == init) 
		os << ".0" << std::endl;
	else
		os << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Converter& c){
	c.printChar(os);
	c.printInt(os);
	c.printFloat(os);
	c.printDouble(os);
	return (os);
}