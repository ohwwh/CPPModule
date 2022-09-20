#include <iostream>

class base{
	protected:
		std::string name;
	public:
		base(){
			name = "base";
		}
		void what(void){
			std::cout << name << std::endl;
		}
};

class derived : public base{
	protected:
		std::string name;
	public:
		derived(){
			name = "derived";
			base::name = "what";
		}
		void what(){
			std::cout << name << std::endl;
			std::cout << base::name << std::endl;
		}
};

int main(void){
	char a = 10;
	int& r = (int &)a;
	r = 5;
}