#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain{
	std::string ideas[100];
	public:
		Brain();
		Brain(const Brain& b);
		Brain& operator=(const Brain& b);
		~Brain();

		Brain(std::string idea);
		std::string getIdea(void);
};

#endif