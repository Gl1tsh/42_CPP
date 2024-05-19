#include <string>
#include <iostream>


/*
 * chose a faire :
 *
 * ouvrir le fichier
 * lire une ligne apres l'autre
 * remplacer le mot trouver (s2) par un autre (s1)
 * fermer le fichier une fois fini
 *
 *
 * fonction pratique :
 * insert
 * find
 * substr
 * erase
 *
 *
*/


int main(int argc, char **argv)
{
	(void)argc;
	std::string line = argv[1];
	std::string search = argv[2];
	std::string replace = argv[3];

	std::string::size_type pos;

	pos = line.find(search);
	if (pos != std::string::npos)
	{
		line.erase(pos, search.size());
		line.insert(pos, replace);
	}
	std::cout << line << std::endl;
	return 0;
}
