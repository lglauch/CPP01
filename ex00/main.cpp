#include "Zombie.hpp"


int main(void)
{
	Zombie* one;

	one = newZombie("Peter");
	one->announce();
	delete(one);

	randomChump("Freddy");
}