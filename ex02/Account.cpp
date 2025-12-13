#include "Account.hpp"
#include "iostream"

Account::Account(int initial_deposit)
{
    std::cout << "Dans le construteur: " << initial_deposit <<  std::endl;

}

Account::~Account()
{
    std::cout << "Dans le destructeur" << std::endl;
}

int	Account::getNbAccounts( void )
{
    return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
    return Account::_totalAmount;
}

int	Account::getNbDeposits( void )
{
    return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
    return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() <<";deposits:"<< getNbDeposits() <<";withdrawals:"<< getNbWithdrawals() <<std::endl;
    
}

void	Account::makeDeposit( int deposit ){
    std::cout << "Dans le makedeposit" << std::endl;

    (void)deposit;
}
bool	Account::makeWithdrawal( int withdrawal ){
    std::cout << "Dans le makewithdrawal" << std::endl;

    (void)withdrawal;
    return 0;
}
int		Account::checkAmount( void ) const{
    std::cout << "Dans le checkamount" << std::endl;
    return 0;
}
void	Account::displayStatus( void ) const{
    std::cout << "Dans le displaystatus" << std::endl;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;