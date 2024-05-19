#include <string>
#include <iostream>
#include <fstream>

std::string replace_me(std::string line, std::string search, std::string replace)
{
	std::string::size_type pos;

	pos = line.find(search);
	while (pos != std::string::npos)
	{
		line.erase(pos, search.size());
		line.insert(pos, replace);
		pos = line.find(search, pos + replace.size());
	}
	return line;
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong argument count" << std::endl;
		return 1;
	}
	else
	{
		std::string filename = argv[1];
		std::string search = argv[2];
		std::string replace = argv[3];

		std::fstream file(filename, std::ios::in);
		if (!file.is_open())
		{
			std::cout << "Cannot open " << filename << std::endl;
			return 1;
		}
		std::fstream outfile(filename + ".replace", std::ios::out | std::ios::trunc);
		if (!outfile.is_open())
		{
			std::cout << "Cannot create " << filename + ".replace" << std::endl;
			return 1;
		}

		std::string line;
		while (std::getline(file, line))
			outfile << replace_me(line, search, replace) << std::endl;
	}
	return 0;
}
