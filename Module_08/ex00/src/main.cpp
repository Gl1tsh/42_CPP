#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>
#include <exception>

int main()
{
	// cree un tableau de int, et ajoute des valeurs les unes apres les autres
	// donc {10, 20, 30, 40, 50}
	std::vector<int> vector_int;
	vector_int.push_back(10);
	vector_int.push_back(20);
	vector_int.push_back(30);
	vector_int.push_back(40);
	vector_int.push_back(50);

	try
	{
		std::cout << "vector de INT : Est-ce que 40 est dans le container, oui a la position : " << easyfind(vector_int, 30) << std::endl;
		std::cout << "vector de INT : Est-ce que 40 est dans le container, non : " << easyfind(vector_int, 42) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	// cree une liste de int, et ajoute des valeurs les unes apres les autres
	// donc {10, 20, 30, 40, 50}
	std::list<int> list_int;
	list_int.push_back(10);
	list_int.push_back(20);
	list_int.push_back(30);
	list_int.push_back(40);
	list_int.push_back(50);

	try
	{
		std::cout << "list de INT : Est-ce que 40 est dans le container, oui a la position : " << easyfind(list_int, 30) << std::endl;
		std::cout << "list de INT : Est-ce que 40 est dans le container, non : " << easyfind(list_int, 42) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
