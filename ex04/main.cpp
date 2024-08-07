#include <fstream>
#include <iostream>
#include <string>
#include <sys/stat.h>

//create file.txt with content
// Hello my my Nokayme is Jeff okay and i come
// from the land of schoki.
// Visit me at my house.


bool	fileExists(std::string name)
{
	struct stat buffer;
	return stat(name.c_str(), &buffer) == 0;
}

std::string changeline(std::string line, std::string argv2, std::string argv3)
{
	std::string newline;
    size_t pos = 0;
	size_t lastpos = 0;

    while ((pos = line.find(argv2, lastpos)) != std::string::npos)
		{
			newline += line.substr(lastpos, pos - lastpos) + argv3; 
			lastpos = pos + argv2.length();
		}
    newline += line.substr(lastpos);
    return newline;	
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong arguments -> [filename | string1 | string2 ]" << std::endl;
		return (1);
	}

	std::string original = argv[1];
	std::string replace = original + ".replace";
	std::ifstream infile(original.c_str());
	if (!infile.is_open())
	{
		std::cout << "Failed to open file!" << std::endl;
		return (1);
	}
	std::string line;
	std::ofstream outfile(replace.c_str());
	if (!outfile.is_open())
	{
		std::cout << "Failed to create output file!" << std::endl;
		return (1);
	}
	std::string argv2 = argv[2];
	std::string argv3 = argv[3];
	while (std::getline(infile, line))
	{
		line = changeline(line, argv2, argv3);
		outfile << line;
		if (infile.peek() != EOF)
			outfile << std::endl;
	}
	infile.close();
	outfile.close();
	return (0);
}