#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <iostream>
#include <fstream>

class OpenException : public std::exception{
	public:
		const char* what(void) const throw(){ return ("file open failed"); }
};

class ReadException : public std::exception{
	public:
		const char* what(void) const throw(){ return ("file read failed"); }
};

unsigned int random_generator(int range){
	int ret = 0;
	size_t size = sizeof(ret);

	std::ifstream r("/dev/urandom");
	if (!r.is_open())
		throw OpenException();
	if (!r.read(reinterpret_cast<char *>(&ret), size))
		throw ReadException();
	if (ret < 0)
		ret *= -1;
	return (ret % range);
}
