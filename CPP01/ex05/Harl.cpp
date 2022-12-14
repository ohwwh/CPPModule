#include "Harl.hpp"

void toUpper(std::string *str){
	const int len = str->length();
	
	for (int i = 0; i < len; i ++)
		(*str)[i] = std::toupper((*str)[i]);
}

Harl::Harl(){
	ptr[0] = &Harl::debug;
	ptr[1] = &Harl::info;
	ptr[2] = &Harl::warning;
	ptr[3] = &Harl::error;
	str[0] = "DEBUG";
	str[1] = "INFO";
	str[2] = "WARNING";
	str[3] = "ERROR";
}

void Harl::debug(void){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){
	toUpper(&level);
	for (int i = 0; i < 4; i ++)
	{
		if (str[i] == level)
		{
			(this->*ptr[i])();
			return ;
		}
	}
	std::cout << "what's this level?" << std::endl;
}