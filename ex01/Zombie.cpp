#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << " got destroyed" << std::endl;
}

void	Zombie::set_name(std::string name_new)
{
	name = name_new;
}