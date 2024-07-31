#pragma once

#include <iostream>

class Zombie
{
	private:
	std::string name;

	public:
	void	announce(void);
	void	set_name(std::string name_new);
	~Zombie();
};

Zombie* zombieHorde(int N, std::string name);
