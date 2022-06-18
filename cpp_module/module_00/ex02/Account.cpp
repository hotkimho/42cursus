#include "Account.hpp"
#include <iostream>
#include <time.h>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int Account::getTotalAmount(void)
{
	return _totalAmount;
}

int Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void Account::_displayTimestamp(void)
{
	time_t timeType = time(NULL);
	struct tm *currentTime = localtime(&timeType);

	std::cout << '[' << currentTime->tm_year + 1900;
	std::cout << currentTime->tm_mon;
	std::cout << currentTime->tm_mday;
	std::cout << "_" << currentTime->tm_hour;
	std::cout << currentTime->tm_min;
	std::cout << currentTime->tm_sec << "] ";
}

Account::Account()
{
	_accountIndex = 0;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

Account::Account(int initial_deposit)
{
	Account();

	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ';';
	std::cout << "amount:" << _amount << ';';
	std::cout << "created" << std::endl;
}

Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ';';
	std::cout << "total:" << _totalAmount << ';';
	std::cout << "deposits:" << _nbDeposits << ';';
	std::cout << "withdrawals:" << _totalAmount << std::endl;
}

