#include <iostream>
#include <stack>

int main(void){
	std::stack<int> s1= std::stack<int>();
	std::stack<int> s2(s1);
}