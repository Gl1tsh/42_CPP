#include "BitcoinExchange.hpp"
#include <fstream>
#include <iostream>
#include <string>
#include <exception>

// Convertit une chaine de caractère en double
double parseDouble(const std::string& input)
{
	char *end;
	errno = 0;
	double doubleValue = std::strtod(input.c_str(), &end);

	if (end != input.c_str() && *end == '\0' && errno == 0)
		return doubleValue;
	throw std::invalid_argument("double: error: impossible");
}

// Convertit une chaine de caractère en int
int parseInt(const std::string& input)
{
	errno = 0;
	char *end;
	long intValue = std::strtol(input.c_str(), &end, 10);

	if (*end == '\0' && errno == 0)
	{
		if (intValue >= std::numeric_limits<int>::min() && intValue <= std::numeric_limits<int>::max())
			return intValue;
	}
	throw std::invalid_argument("int: error: impossible");
}

bool isValideDate(std::string date)
{
	// On crée une structure tm pour stocker la date
	struct tm timeinfo;

	// membre pas utilisé
	timeinfo.tm_gmtoff = 0;
	timeinfo.tm_zone = 0;
	timeinfo.tm_wday = 0;
	timeinfo.tm_yday = 0;
	timeinfo.tm_isdst = 0;
	timeinfo.tm_hour = 0;
	timeinfo.tm_min = 0;
	timeinfo.tm_sec = 0;

	// On extrait l'année, le mois et le jour de la date, - tm.h veux le - 1900 (delta entre maintenant et 1900)
	timeinfo.tm_year = parseInt(date.substr(0, 4)) - 1900;

	// On extrait le mois de la date, - 1 car le mois commence a 0
	timeinfo.tm_mon = parseInt(date.substr(5, 2)) - 1;

	// On extrait le jour de la date
	timeinfo.tm_mday = parseInt(date.substr(8, 2));

	// On verifie si la date est valide
	// Si la date est invalide, on retourne false
	return mktime(&timeinfo) != -1;
}

void parseRate(std::string filename, BitcoinExchange& bitcoin_exchange)
{
	// Ouvre le fichier passer en paramètre
	std::fstream file(filename, std::ios::in);

	// Si le fichier ne peux pas etre ouvert, on lance une exception
	if (!file.is_open())
		throw std::runtime_error(std::string("Error: cannot open file ") + filename);

	// On crée une variable pour stocker chaque ligne du fichier
	std::string line;

	// On skip la premiere ligne du fichier
	std::getline(file, line);

	// On parcours chaque ligne du fichier
	while (std::getline(file, line))
	{
		if (line.empty())
			continue;
		// On trouve la virgule pour separer la date du taux
		size_t commaPosition = line.find(",");

		// extraire la date de la line
		std::string date = line.substr(0, commaPosition);

		// Si la date n'est pas valide, on lance une exception
		if (!isValideDate(date))
			throw std::invalid_argument("date: error: impossible");
		
		// extraire le taux de la line
		double rate = parseDouble(line.substr(commaPosition + 1));

		// ajoute le taux a la date
		bitcoin_exchange.addRateForDate(date, rate);
	}
}

void processInput(std::string filename, BitcoinExchange& bitcoin_exchange)
{
	// Ouvre le fichier passer en paramètre
	std::fstream file(filename, std::ios::in);

	// Si le fichier ne peux pas etre ouvert, on lance une exception
	if (!file.is_open())
		throw std::runtime_error(std::string("Error: cannot open file ") + filename);

	// On crée une variable pour stocker chaque ligne du fichier
	std::string line;

	// On parcours chaque ligne du fichier
	while (std::getline(file, line))
	{
		try
		{
			if (line.empty())
				continue;
			// On trouve la virgule pour separer la date du taux
			size_t commaPosition = line.find("|");

			// extraire la date de la line
			std::string date = line.substr(0, commaPosition);

			// Si la date n'est pas valide, on lance une exception
			if (!isValideDate(date))
				throw std::invalid_argument("date: error: impossible");
			
			// extrait le monatant de la line
			double amount = parseDouble(line.substr(commaPosition + 1));

			// ajoute le taux a la date
			std::cout << date << " => " << amount << " = " << bitcoin_exchange.findRateAtDate(date) * amount << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}


int main(int argc, char **argv)
{
	if (argc < 2 || argc > 3)
	{
		std::cerr << "Usage: " << argv[0] << " <input file> [<csv file>]" << std::endl;
		return 1;
	}

	try
	{
		// On affiche 10 chiffre significatif
		std::cout.precision(10);

		BitcoinExchange bitcoin_exchange;
		parseRate(argv[2], bitcoin_exchange);
		processInput(argv[1], bitcoin_exchange);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}