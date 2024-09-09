#include <iostream>
#include "Swap.hpp"
#include "MinMax.hpp"

int main()
{

/*

	std::cout << "le main de la donnee est horrible" << std::endl;

	int a = 2;
	int b = 3;
	// pas besoin d'instancier un objet pour appeler une fonction quand on utilise des template,... oui... adieu cerveau
	::swap(a, b);

	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);

	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

*/

	std::cout << "=================== template int test =====================" << std::endl;
	std::cout << "attribution de valeurs a et b" << std::endl;
	int a = 5;
	int b = 10;

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << std::endl;

	std::cout << "swap des int a et b grace a la fonction swap" << std::endl;
	::swap(a, b);

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << std::endl;

	std::cout << "test de ::min(a, b) est plus petit que ::max(a, b)" << std::endl;
	std::cout << ::min(a, b) << " est plus petit que " << ::max(a, b) << std::endl;
	std::cout << "test de ::max(a, b) est plus grand que ::min(a, b)" << std::endl;
	std::cout << ::max(a, b) << " est plus grand que " << ::min(a, b) << std::endl;
	std::cout << std::endl;

	std::cout << "=================== template string test ==================" << std::endl;
	std::cout << "attribution de valeurs des string c et d" << std::endl;
	std::string c = "string 10";
	std::string d = "string 10";

	std::cout << "string 1 : " << c << std::endl;
	std::cout << "string 2 : " << d << std::endl;
	std::cout << std::endl;

	std::cout << "swap des string c et d grace a la fonction swap" << std::endl;
	::swap(c, d);

	std::cout << "string 1 : " << c << std::endl;
	std::cout << "string 2 : " << d << std::endl;
	std::cout << std::endl;

	std::cout << "test de ::min(c, d) est plus petit que ::max(c, d)" << std::endl;
	std::cout << ::min(c, d) << " est plus petit que " << ::max(c, d) << std::endl;
	std::cout << "test de ::max(c, d) est plus grand que ::min(c, d)" << std::endl;
	std::cout << ::max(c, d) << " est plus grand que " << ::min(c, d) << std::endl;

	return 0;
}
