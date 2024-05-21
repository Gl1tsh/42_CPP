#include <iostream>
#include <string>

std::string to_upper_iterator(std::string word)
{
	for (std::string::iterator iter = word.begin(); iter != word.end(); iter++)
		*iter = toupper(*iter);
	return word;
}

int main(int argc, char **argv)
{
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < argc; i++)
			std::cout << to_upper_iterator(argv[i]);
	std::cout << std::endl;
	return 0;
}

