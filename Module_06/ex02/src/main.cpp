#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>


// Fonction qui génère un objet de type Base aléatoirement avec un chiffre aléatoire entre 0 et 2 attribuer à chaque objets
Base* generate(void)
{
	int random_number = rand() % 3;

	// si le numéro aléatoire est 0, on retourne un pointeur sur un objet de la classe A
	if (random_number == 0)
		return new A;
	// si le numéro aléatoire est 1, on retourne un pointeur sur un objet de la classe B
	else if (random_number == 1)
		return new B;
	// sinon, on retourne un pointeur sur un objet de la classe C (numéro aléatoire égal à 2)
	else
		return new C;
}

// Fonction qui prend un pointeur sur un objet de type Base en paramètre et qui affiche le type de l'objet
void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cerr << "Type inconnu" << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}



int main()
{
	srand(time(NULL)); // Initialise le générateur de nombres aléatoires

	Base* obj = generate(); // Génère un objet aléatoire de type A, B, ou C
	identify(obj);          // Identifie l'objet via le pointeur
	identify(*obj);         // Identifie l'objet via la référence

	delete obj;             // Libère la mémoire
	return 0;
}