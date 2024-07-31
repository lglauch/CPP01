#include <iostream>

int main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Memory address of string: " << &string << std::endl;
	std::cout << "Memory address of stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address of stringREF: " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Value address of string: " << string << std::endl;
	std::cout << "Value address of stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value address of stringREF: " << stringREF << std::endl;
}