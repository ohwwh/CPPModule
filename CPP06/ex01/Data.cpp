#include "Data.hpp"

Data::Data() {data = 0;}
Data::Data(const Data& d) {data = d.data;}
Data& Data::operator=(const Data& d) {
	data = d.data;
	return (*this);
}
Data::~Data() {}

Data::Data(int num){data = num;}
int Data::getData(void) {return (data);}