#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>

class Harl{
	void (Harl::*ptr[4])(void);
	std::string str[4];
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	public:
		Harl();
		void complain(std::string level);
};

#endif
