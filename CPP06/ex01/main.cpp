#include "Data.hpp"
#include <iostream>

uintptr_t serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}

int main(void){
	Data* pData = new Data(770);
	uintptr_t raw = serialize(pData);
	Data* ret = deserialize(raw);
	std::cout << ret->getData() << std::endl;

	delete pData;
}