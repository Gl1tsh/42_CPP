#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <utility>

class BitcoinExchange
{
public:
	BitcoinExchange();
	~BitcoinExchange();

	void addRateForDate(std::string date, double rate);
	double findRateAtDate(std::string date);



private:
	BitcoinExchange(const BitcoinExchange &source);
	BitcoinExchange &operator=(const BitcoinExchange &source);
	// cree un vecteur de pair de string et double
	std::map<std::string, double> exchangeRates;


};


#endif
