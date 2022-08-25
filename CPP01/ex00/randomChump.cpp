#include "Zombie.hpp"

void Zombie::randomChump(std::string name){
	Zombie newz = Zombie(name);
	newz.announce();
};