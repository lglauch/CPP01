#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
	Weapon *weapon;
	std::string name;

	public:
	HumanB(std::string _name);
	void	attack();
	void	setWeapon(Weapon &gun);
};