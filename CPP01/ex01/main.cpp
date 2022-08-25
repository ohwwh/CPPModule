#include "Zombie.hpp"

int main(void)
{
	Zombie org = Zombie("Father");
	org.announce();
	Zombie *childs = org.zombieHorde(10, "Sons");
	for (int i = 0; i < 10; i++)
		childs->announce();
	delete[] childs;
}