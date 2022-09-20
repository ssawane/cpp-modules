/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 10:44:58 by ssawane           #+#    #+#             */
/*   Updated: 2022/09/15 14:03:27 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_totalAmount += this->_amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "index:" << this->_accountIndex << ";amount:"
		<< this->_amount << ";created" << std::endl;
}

Account::Account(void)
{

}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
		<< this->_amount << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	int	p_amount;
	
	Account::_displayTimestamp();
	p_amount = this->_amount;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	std::cout << "index:" << this->_accountIndex
		<< ";p_amount:" << p_amount
		<< ";deposit:" << deposit
		<< ";amount:" << this->_amount
		<< ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	int	p_amount;
	
	Account::_displayTimestamp();
	p_amount = this->_amount;
	std::cout << "index:" << this->_accountIndex
		<< ";p_amount:" << p_amount << ";withdrawal:";
	this->_amount -= withdrawal;
	if (!Account::checkAmount())
	{
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		this->_totalAmount -= withdrawal;
		std::cout << withdrawal << ";amount:" << this->_amount
			<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return true;
	}
	else
	{
		std::cout << "refused" << std::endl;
		this->_amount = p_amount;
		return false;
	}
}

int Account::checkAmount(void) const
{
	if (this->_amount < 0)
		return 1;
	return 0;
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t     now = time(0);
	struct tm  time_struct;
	char       buf[80];

	time_struct = *localtime(&now);
	strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", &time_struct);
	std::cout << "[" << buf << "] ";
	// std::cout << "[19920104_091532] ";
}

int	Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return _totalAmount;
}

int	Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts()
		<< ";total:" << Account::getTotalAmount()
		<< ";deposits:" << Account::getNbDeposits()
		<< ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}