#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::HumanA(){}

HumanA::HumanA(std::string name, Weapon gun) {}

HumanA::~HumanA(){}