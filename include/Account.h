/**
 * @Author: Aram Hamidi <aramhamidi>
 * @Date:   2018-08-21T11:13:11-07:00
 * @Email:  aram.hamidi@getcruise.com
 * @Project: Laser_Driver_A53
 * @Filename: Account.h
 * @Last modified by:   aramhamidi
 * @Last modified time: 2018-08-21T13:17:15-07:00
 */
// Account.h
// Account class definition. Represents a bank account.
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
  public:
    Account( int, int, double, double ); // constructor sets attributes
    bool validatePIN( int ) const; // is user-specified PIN correct?
    double getAvailableBalance() const; // returns available balance
    double getTotalBalance() const; // returns total balance
    void credit( double ); // adds an amount to the Account balance
    void debit( double ); // subtracts an amount from the Account balance
    int getAccountNumber() const; // returns account number
  private:
    int accountNumber; // account number
    int pin; // PIN for authentication
    double availableBalance; // funds available for withdrawal
    double totalBalance; // funds available + funds waiting to clear
}; // end class Account

#endif // ACCOUNT_H
