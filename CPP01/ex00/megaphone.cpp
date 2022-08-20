#include <string>
#include <iostream>

int main(int argc, char *argv[])
{
	int r;
	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i=1; i < argc; i ++)
	{
		std::string str = argv[i];
		r = str.length();
		for (int j = 0; j < r; j ++)
			str[j] = std::toupper(str[j]);
		std::cout << str;
	}
	std::cout << std::endl;
	return (0);
}

