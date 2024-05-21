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

// EXPLICATION
//=====================
/*




Le & cree un alias depuis un varible existante
si la variable source est modifier, l'alias egalement
ATTENTION : ce n'est pas un clone ou double

exemple:
std::string bonjour = "salut"
std::string& hello = bonjour

resultat : hello est egal a "salut"


Le pointeur, peux pointer sur une zone memoire meme si elle est NULL
Le pointeur n'a pas besoin d'etre lier a une variable existante

exemple:
char *salut
printf(%p, salut)
resultat sera la zone memoire

*/
