#include "Weapon.hpp"

const std::string& Weapon::getType() const
{
	return (type);
}

void	Weapon::setType(std::string newType)
{
	type = newType;
}

Weapon::Weapon() {}

Weapon::Weapon(std::string gun) {}

Weapon::~Weapon() {}