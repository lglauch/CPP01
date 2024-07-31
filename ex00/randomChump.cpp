#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie one;

	one.set_name(name);
	one.announce();
}