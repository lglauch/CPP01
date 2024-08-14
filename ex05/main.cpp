#include "Harl.hpp"

int main(void)
{
    Harl Karen;
    std::string line;
    
    std::cout << "Please enter input [DEBUG, INFO, WARNING, ERROR, EXIT]" << std::endl;
    while (std::getline(std::cin, line))
    {
        if (line == "EXIT")
            return(0);
        Karen.complain(line);
    }
}