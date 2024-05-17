#include <string.h>
#include <iostream>

int main()
{
	std::string hi_this_is_brain = "HI THIS IS BRAIN";
	std::string* stringPTR = &hi_this_is_brain;
	std::string& stringREF = hi_this_is_brain;

	std::cout << std::endl;
	std::cout << "The memory address of the string variable     : " << &hi_this_is_brain << std::endl;
	std::cout << "The memory address of the string variable     : " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF          : " << &stringREF << std::endl;

	std::cout << std::endl;
	std::cout << "The value of the string variable              : " << hi_this_is_brain << std::endl;
	std::cout << "The value pointed to by stringPTR             : " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF             : " << stringREF << std::endl;

	return 0;
}
