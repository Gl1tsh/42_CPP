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

	// si end est different de input.c_str() et que end est un caractère nul et que errno est 0, c'est good
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
		// On verifie si la valeur est dans les limites d'un int (min et max)
		if (intValue >= std::numeric_limits<int>::min() && intValue <= std::numeric_limits<int>::max())
			return intValue;
	}
	throw std::invalid_argument("int: error: impossible");
}

// Fonction qui permet de verifier si une date est valide
bool isValideDate(std::string date)
{
	// On crée une structure tm pour stocker la date
	struct tm timeinfo;

	// On extrait l'année, le mois et le jour de la date, - tm.h veux le - 1900 (delta entre maintenant et 1900)
	int originalYear = parseInt(date.substr(0, 4));

	// On extrait le mois de la date, - 1 car le mois commence a 0
	int originalMonth = parseInt(date.substr(5, 2));

	// On extrait le jour de la date
	int originalDay = parseInt(date.substr(8, 2));

	// membre pas utilisé
	timeinfo.tm_gmtoff = 0;
	timeinfo.tm_zone = 0;
	timeinfo.tm_wday = 0;
	timeinfo.tm_yday = 0;
	timeinfo.tm_isdst = 0;
	timeinfo.tm_hour = 0;
	timeinfo.tm_min = 0;
	timeinfo.tm_sec = 0;
	timeinfo.tm_year = originalYear - 1900;
	timeinfo.tm_mon = originalMonth - 1;
	timeinfo.tm_mday = originalDay;

	// On verifie si la date est valide
	// Si la date est invalide, on retourne false
	time_t timestamp = mktime(&timeinfo);
	// mktime retourne -1 si la date est invalide, compare la date original (parser) avec la date convertie
	return timestamp != -1 && timeinfo.tm_year + 1900 == originalYear && timeinfo.tm_mon + 1 == originalMonth && timeinfo.tm_mday == originalDay;
}

// fonction qui permet de parser le fichier csv et de stocker les taux dans la classe BitcoinExchange
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

// fonction qui permet de parser le fichier d'input (celui que läon cree manuelement) et de calculer le montant en euro
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
			if (amount < 0 || amount > 1000)
				throw std::invalid_argument("amount: error: impossible");

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
	// Verifier si le nombre de paramètre est bon
	// si le nombre de paramètre est different de 2 ou 3, on affiche un message d'erreur
	// On affiche 10 chiffre significatif en tout
	// On crée une variable pour stocker le nom du fichier csv
	// Si le nombre de paramètre est égale a 3, on stocke le nom du fichier csv dans la variable
	// sinon on garde le nom par défaut
	// On crée une instance de BitcoinExchange
	// On parse le fichier csv
	// On parse le fichier d'input
	// Si une exception est lancée, on affiche le message d'erreur et on retourne 1

	if (argc < 2 || argc > 3)
	{
		std::cerr << "Usage: " << argv[0] << " <input file> [<csv file>]" << std::endl;
		return 1;
	}

	try
	{
		// On affiche 10 chiffre significatif en tout
		std::cout.precision(10);
		std::string csv_filename = "data.csv";

		// Check si le fichier csv est passer en paramètre, sinon on garde le nom par défaut (qui est le fichier data.csv)
		if (argc == 3)
			csv_filename = argv[2];
		BitcoinExchange bitcoin_exchange;
		parseRate(csv_filename, bitcoin_exchange);
		processInput(argv[1], bitcoin_exchange);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}