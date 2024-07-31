#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *start_horde;

	start_horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		start_horde[i].set_name(name);
	}
	return (start_horde);
}