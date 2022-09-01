#include <iostream>
#include <fstream>
#include <regex>

void	ft_replace(std::string& s, const std::string& s1, const std::string& s2)
{
	int	index;
	const int	len1 = s1.length();

	index = s.find(s1);
	//std::cout << s << std::endl;
	while (index != std::string::npos)
	{
		s.erase(index, 4);
		std::cout << s << std::endl;
		s.insert(index, s2);
		std::cout << s << std::endl;
		index = s.find(s1);
	}
}

int main(int argc, char *argv[]){
	if (argc != 4)
	{
		std::cout << "arguments error" << std::endl;
		return (0);
	}
	std::ifstream in(argv[1]);
	std::string s;
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string test = "this is\nreally\nlong\ntext can\nmy program\nread this\nline\n?";
	if (!in.is_open())
	{
		std::cout << "File reading has failed" << std::endl;
		return (0);
	}
	in.seekg(0, std::ios::end);
	const int size = in.tellg();
	s.resize(size); // 이게 없으니 can이 cap이 되는 기적
	in.seekg(0, std::ios::beg);
	in.read(&s[0], size);
	std::cout << s << std::endl;
	/*test.erase(0, 4);
	std::cout << test << std::endl;*/
	ft_replace(s, s1, s2);
	std::cout << s << std::endl;
	return (0);
}