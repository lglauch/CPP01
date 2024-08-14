#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
	private:
	std::string name;

	public:
	void	announce(void);
	void	set_name(std::string name_new);
	Zombie();
	~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif
