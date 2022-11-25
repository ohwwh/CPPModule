#include <iostream>
#include <stack>

void	test(int &ref)
{
	ref ++;
	return ;
}

int main(void)
{
	int a = 5;
	test(5);
	std::cout << a << std::endl;
}