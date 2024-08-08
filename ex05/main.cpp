#include "Harl.hpp"

int main(void)
{
    Harl Karen;
    std::string line;
    
    std::cout << "Please enter input [DEBUG, INFO, WARNING, ERROR]" << std::endl;
    while (std::getline(std::cin, line))
    {
        Karen.complain(line);
    }
}