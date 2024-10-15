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

void BitcoinExchange::addRateForDate(std::string date, double rate)
{
	(void)date;
	(void)rate;
}

double BitcoinExchange::findRateAtDate(std::string date)
{
	(void)date;
	return 0;
}
