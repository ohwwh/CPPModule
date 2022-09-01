#include "Harl.hpp"

extern void toUpper(std::string *str);

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (1);
	}
	Harl harl;
	std::string level = argv[1];
	harl.complain(level);
}