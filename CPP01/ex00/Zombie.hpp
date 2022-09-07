#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>

class Zombie{
	std::string name;

	public:
		Zombie(std::string name);
		Zombie *newZombie(std::string name);
		void randomChump(std::string name);
		void announce(void);
		~Zombie();
};

#endif