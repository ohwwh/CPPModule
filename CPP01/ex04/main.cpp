#include <iostream>
#include <fstream>
#include <sstream>

void ft_replace(std::string& s, const std::string& s1, const std::string& s2)
{
	int	index;
	const int	len1 = s1.length();

	if (s1.empty())
		return ;
	index = s.find(s1);
	while (index != std::string::npos)
	{
		s.erase(index, len1);
		s.insert(index, s2);
		index = s.find(s1, index + len1);
	}
}

int main(int argc, char *argv[]){
	if (argc != 4)
	{
		std::cout << "arguments error" << std::endl;
		return (0);
	}
	/*std::ifstream in;
	in.open(argv[1]);*/
	std::ifstream in(argv[1]);
	std::string file = argv[1];
	file = file + ".replace";
	std::string s;
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::stringstream ss;
	if (!in.is_open())
	{
		std::cerr << "File reading has failed" << std::endl;
		return (0);
	}
	/*in.seekg(0, std::ios::end);
	//in.seekg(0, in.end);
	const int size = in.tellg();
	s.resize(size);
	in.seekg(0, std::ios::beg);
	//in.seekg(0, in.beg);
	in.read(&s[0], size); -> 실패 시 예외 처리*/
	ss << in.rdbuf();
	s = ss.str();
	//in.close();
	//std::cout << s << std::endl;
	ft_replace(s, s1, s2);
	std::ofstream out(file);
	//std::cout << s << std::endl;
	out << s;
	return (0);
}