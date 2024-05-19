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
		return 1;
	else
	{
		std::string line = argv[1];
		std::string search = argv[2];
		std::string replace = argv[3];

		line = replace_me(line, search, replace);
		std::cout << line << std::endl;
	}
	return 0;
}


/*
int main(int argc, char **argv)
{
	(void)argc;
	std::string line = argv[1];
	std::string search = argv[2];
	std::string replace = argv[3];

	std::string::size_type pos;

	pos = line.find(search);
	while (pos != std::string::npos)
	{
		line.erase(pos, search.size());
		line.insert(pos, replace);
		pos = line.find(search, pos + replace.size());
	}
	std::cout << line << std::endl;
	return 0;
}

*/