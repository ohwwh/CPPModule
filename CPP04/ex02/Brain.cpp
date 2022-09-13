#include "Brain.hpp"

Brain::Brain(){
	for (int i = 0; i < 100; i ++)
		ideas[i] = "none";
	std::cout << "Brain is created" << std::endl;
}
Brain::Brain(const Brain& b){
	for (int i = 0; i < 100; i ++)
		ideas[i] = b.ideas[i];
	std::cout << "Brain is copied and created" << std::endl;
}
Brain& Brain::operator=(const Brain& b){
	for (int i = 0; i < 100; i ++)
		ideas[i] = b.ideas[i];
	std::cout << "Brain is copied" << std::endl;
	return (*this);
}
Brain::~Brain(){
	std::cout << "Brain is destroyed" << std::endl;
}

Brain::Brain(std::string idea){
	for (int i = 0; i < 100; i ++)
		ideas[i] = idea;
	std::cout << "Brain is created with idea " << idea << std::endl;
}

std::string Brain::getIdea(void){
	return (ideas[0]);
}