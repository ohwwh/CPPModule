#ifndef CONVERTER_HPP
#define CONVERTER_HPP
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cmath>

class Converter{
	double init;
	public:
		Converter();
		Converter(const Converter& c);
		Converter& operator=(const Converter& c);
		~Converter();

		Converter(const char str[]);
		double getInit() const;
		void printChar(std::ostream& os) const;
		void printInt(std::ostream& os) const;
		void printFloat(std::ostream& os) const;
		void printDouble(std::ostream& os) const;
};

std::ostream& operator<<(std::ostream& os, const Converter& c);

#endif