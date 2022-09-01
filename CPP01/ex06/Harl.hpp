#include <iostream>
#include <vector>
#include <map>

class Harl{
	void (Harl::*ptr[4])(void);
	std::string str_ptr[4];
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	public:
		Harl();
		void complain(std::string level);
};
