#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts() { return Account::_nbAccounts;}
int Account::getTotalAmount() { return Account::_totalAmount;}
int Account::getNbDeposits() { return Account::_totalNbDeposits;}
int Account::getNbWithdrawals() { return Account::_totalNbWithdrawals;}

Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_nbAccounts++;
	Account::_totalAmount+=this->_amount;

	_displayTimestamp();
	std::cout <<
	"index:" << this->_accountIndex << ";" <<
	"amount:" << this->checkAmount() << ";" <<
	"created" <<
	std::endl;
}
Account::~Account()
{
	_displayTimestamp();
	std::cout <<
	"index:" << this->_accountIndex << ";" <<
	"amount:" << this->checkAmount() << ";" <<
	"closed" <<
	std::endl;
}

void Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
				<< ";amount:" << this->_amount
				<< ";deposits:" << this->_nbDeposits
				<< ";withdrawals:" << this->_nbWithdrawals
				<< std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout <<
	"index:" << this->_accountIndex << ";" <<
	"p_amount:" << this->checkAmount() << ";" <<
	"deposit:" << deposit << ";";
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	std::cout <<
	"amount:" << this->checkAmount() << ";" <<
	"nb_deposits:" << this->_nbDeposits <<
	std::endl;
}
void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
				<< ";total:" << getTotalAmount()
				<< ";deposits:" << getNbDeposits()
				<< ";withdrawals:"
				<< getNbWithdrawals()
				<< std::endl;
}
bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout <<
	"index:" << this->_accountIndex << ";" <<
	"p_amount:" << this->checkAmount() << ";";
	if (this->checkAmount() < withdrawal)
	{
		std::cout <<
		"withdrawal:refused" <<
		std::endl;
		return (false);
	}
	else
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		std::cout <<
		"withdrawal:" << withdrawal << ";" <<
		"amount:" << this->checkAmount() << ";" <<
		"nb_withdrawals:" << this->_nbWithdrawals <<
		std::endl;
		return (true);
	}
}
void Account::_displayTimestamp()
{
	std::cout << "[19920104_091532] ";
}
int Account::checkAmount() const
{
	return (this->_amount);
}
