#include "Account.hpp"

#include <cstdio>
#include <ctime>
#include <string>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


// Constructor default
Account::Account()
{
	_accountIndex = 0;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

// Constructor
Account::Account(int initial_deposit)
{
	_accountIndex = 0;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";"
			  << "created" << std::endl;
}

// Destructor
Account::~Account()
{

}

int Account::getNbAccounts(void)
{
	return 1;
}

int Account::getTotalAmount(void)
{
	return 1;
}

int Account::getNbDeposits(void)
{
	return 1;
}

int Account::getNbWithdrawals(void)
{
	return 1;
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";"
			  << "total:" << _totalAmount << ";"
			  << "deposits:" << _totalNbDeposits << ";"
			  << "withdrawals:" << _totalNbWithdrawals << ";"
			  << std::endl;
}

void Account::makeDeposit(int deposit)
{

}

bool Account::makeWithdrawal(int withdrawal)
{
	return true;
}

int Account::checkAmount(void) const
{
	return 1;
}

void Account::displayStatus(void) const
{

}

void Account::_displayTimestamp(void)
{
	std::time_t t = std::time(NULL);
	std::tm* tm = std::localtime(&t);

	char buffer[19];
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", tm);

	std::cout << buffer;
}
