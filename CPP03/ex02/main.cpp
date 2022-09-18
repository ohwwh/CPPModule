#include "FragTrap.hpp"

int main()
{
	FragTrap CT;
	FragTrap CT2(CT);
	for (int i = 0; i < 4; i++)
		CT.attack("Bandit");
	CT.takeDamage(9);
	for (int i = 0; i < 5; i++)
		CT.beRepaired(2);
	CT.beRepaired(2);
	CT.attack("Bandit");
	CT.takeDamage(9);
	CT.beRepaired(1);
	CT.attack("Bandit");
	FragTrap CT3 = CT;
	CT.takeDamage(9);
	CT3.takeDamage(9);
	CT.highFivesGuys();
	ClapTrap ST;
}