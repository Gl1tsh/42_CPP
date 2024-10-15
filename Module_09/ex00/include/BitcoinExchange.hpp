#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>

class BitcoinExchange
{
public:
	BitcoinExchange();
	~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &source);
	BitcoinExchange &operator=(const BitcoinExchange &source);

	void addRateForDate(std::string date, double rate);
	double findRateAtDate(std::string date);



private:
	std::map<std::string, double> exahangeRates;


};


#endif
