#include <iostream>

std::string& ft_replace(std::string& s, const std::string& s1, const std::string& s2)
{
	int	index;
	const int	len1 = s1.length();

	index = s.find(s1);
	while (index != std::string::npos)
	{
		s.erase(index, len1);
		s.insert(index, s2);
		index = s.find(s1, index + len1);
	}
	return (s);
}

int main(void){
	std::string str = "hi\n my name is sisis\n";
	ft_replace(str, "\n", "a");
	std::cout << str << std::endl;
}