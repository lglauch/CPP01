#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

HumanA::HumanA(){}

HumanA::HumanA(std::string _name, Weapon &gun)
{
	weapon = &gun;
	name = _name;
}

HumanA::~HumanA(){}