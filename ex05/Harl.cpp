#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl object created" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl object deleted" << std::endl;
}

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    std::string levels[4]={"DEBUG", "WARNING", "INFO", "ERROR"};
    functionptr Harlptr[4] = {&Harl::debug, &Harl::warning, &Harl::info, &Harl::error};
	int i = 0;
    while (i < 4)
    {
        if (level == levels[i])
        {
			(this->*Harlptr[i])();
			return;
        }
		i++;
    }
	std::cout << "Wrong parameter" << std::endl;
	std::cout << "Please use: DEBUG, WARNING, INFO, ERROR, EXIT" << std::endl;
}