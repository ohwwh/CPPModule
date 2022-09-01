#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	Weapon weapon1("club");
	Weapon weapon2("kebab");

	HumanA humana("James", weapon1);
	HumanB humanb("Billy");
	humana.attack();
	humanb.attack();
	weapon1.setType("Very big club");
	humanb.setWeapon(0);
	humana.attack();
	humanb.attack();
	humanb.setWeapon(&weapon2);
	humanb.attack();
}