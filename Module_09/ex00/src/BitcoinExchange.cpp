#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::~BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &)
{

}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &)
{
	return *this;
}

// fonction qui permet d'ajouter un taux a une date donnée
void BitcoinExchange::addRateForDate(std::string date, double rate)
{
	// On ajoute le taux a la date et on ajoute la pair date et rate au vecteur
	exchangeRates.push_back(std::make_pair(date, rate));
}

// fonction qui permet de trouver le taux a une date donnée
double BitcoinExchange::findRateAtDate(std::string date)
{
	// On parcours chaque ligne du fichier
	// first = premier element de la pair (string)
	// second = deuxieme element de la pair (double)
	for (std::vector<std::pair<std::string, double> >::iterator it = exchangeRates.begin(); it != exchangeRates.end(); it++)
	{
		if (it->first > date)
		{
			if (it == exchangeRates.begin())
				return 0;
			it--;
			return it->second;
		}
	}
	// Si le vecteur est vide, on retourne 0
	if (exchangeRates.empty())
		return 0;
	// On retourne le taux le plus récent, donc si on est a la fin du vecteur, on retourne le dernier taux (celui juste avant)
	return exchangeRates.back().second;
}
