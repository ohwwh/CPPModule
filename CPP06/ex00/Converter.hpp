#ifndef CONVERTER_HPP
#define CONVERTER_HPP
#include <iostream>
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
		char toChar() const;
		int toInt() const;
		float toFloat() const;
		double toDouble() const;
};

#endif