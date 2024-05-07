#include <iostream>
#include <string>

std::string to_upper_fake(std::string word)
{
	return word;
}



std::string to_upper_in_c_mode(std::string word)
{
	for (std::string::size_type i = 0; i < word.length(); i++)
	{
		word[i] = toupper(word[i]);
	}
	return word;
}






// J'aime bien celle la ============================================

std::string to_upper_iterator(std::string word)
{
	for (std::string::iterator iter = word.begin(); iter != word.end(); iter++)
		*iter = toupper(*iter);
	return word;
}

// ================================================================



// Version short

void to_upper_iterator_short(std::string word)
{
	for (std::string::iterator iter = word.begin(); iter != word.end(); iter++)
		*iter = toupper(*iter);
}

// ================================================================








#include <algorithm>
std::string to_upper_tranform(std::string word)
{
	std::transform(word.begin(), word.end(), word.begin(), ::toupper);
	return word;
}








std::string to_upper_no_erease(const std::string word)
{
	std::string new_word;
	for (std::string::const_iterator iter = word.begin(); iter != word.end(); iter++)
	{
		new_word += toupper(*iter);
	}
	return new_word;
}


std::string to_upper_no_erease_2(std::string word)
{
	std::string new_word;
	for (std::string::iterator iter = word.begin(); iter != word.end(); new_word += toupper(*iter++));
	return new_word;
}


int main_2(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{
		std::string arg = argv[i];
		to_upper_iterator_short(arg);
		std::cout << arg << std::endl;
	}
	return 0;
}


// Pour la version short
int main(int argc, char **argv)
{
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < argc; i++)
		{
			std::string arg = to_upper_iterator(argv[i]);
			std::cout << arg;
		}
	std::cout << std::endl;
	return 0;
}

