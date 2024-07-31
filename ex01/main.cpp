#include "Zombie.hpp"


int main(void)
{
	Zombie *horde;
	int i = 0;
	int n = 8;

	horde = zombieHorde(n, "Foo");

	while (i < n)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;
}