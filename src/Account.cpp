/**
 * @Author: Aram Hamidi <aramhamidi>
 * @Date:   2018-08-21T11:13:51-07:00
 * @Email:  aram.hamidi@getcruise.com
 * @Project: Laser_Driver_A53
 * @Filename: Accpount.cpp
 * @Last modified by:   aramhamidi
 * @Last modified time: 2018-08-21T11:16:44-07:00
 */
// Account.cpp
// Member-function definitions for class Account.
#include "Account.h" // Account class definition

// Account constructor initializes attributes
Account::Account( int theAccountNumber, int thePIN, double theAvailableBalance, double theTotalBalance )
  : accountNumber( theAccountNumber ),
  pin( thePIN ),
  availableBalance( theAvailableBalance ),
  totalBalance( theTotalBalance )
{
// empty body
} // end Account constructor

// determines whether a user-specified PIN matches PIN in Account
bool Account::validatePIN( int userPIN ) const
{
  if ( userPIN == pin )
  return true;
  else
  return false;
} // end function validatePIN

// returns available balance
double Account::getAvailableBalance() const
{
  return availableBalance;
} // end function getAvailableBalance

// returns the total balance
double Account::getTotalBalance() const
{
  return totalBalance;
} // end function getTotalBalance

// credits an amount to the account
void Account::credit( double amount )
{
  totalBalance += amount; // add to total balance
} // end function credit

// debits an amount from the account
void Account::debit( double amount )
{
  availableBalance -= amount; // subtract from available balance
  totalBalance -= amount; // subtract from total balance
} // end function debit

// returns account number
int Account::getAccountNumber() const
{
  return accountNumber;
} // end function getAccountNumber
