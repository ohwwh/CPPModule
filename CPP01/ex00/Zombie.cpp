#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	this->name = name;
};

Zombie* Zombie::newZombie(std::string name){
	Zombie *ret = new Zombie(name);
	return (ret);
};

void Zombie::announce(void){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};

Zombie::~Zombie(){
	std::cout << name << " die" << std::endl;
}