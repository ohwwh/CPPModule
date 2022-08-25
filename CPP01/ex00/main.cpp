#include "Zombie.hpp"

int main(void)
{
	Zombie org = Zombie("Father");
	org.announce();
	Zombie *child = org.newZombie("Son");
	child->announce();
	child->randomChump("GrandSon");
	Zombie *daughter = new Zombie("Daughter");
	daughter->announce();
	delete daughter;
}