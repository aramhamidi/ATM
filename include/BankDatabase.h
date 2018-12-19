/**
 * @Author: Aram Hamidi <aramhamidi>
 * @Date:   2018-08-21T11:17:07-07:00
 * @Email:  aram.hamidi@getcruise.com
 * @Project: Laser_Driver_A53
 * @Filename: BankDatabase.h
 * @Last modified by:   aramhamidi
 * @Last modified time: 2018-08-21T13:20:21-07:00
 */
// BankDatabase.h
// BankDatabase class definition. Represents the bank's database.
#ifndef BANK_DATABASE_H
#define BANK_DATABASE_H

#include <vector> // class uses vector to store Account objects
using std::vector;
#include <stdio.h>
#include "Account.h" // Account class definition

class BankDatabase
{
  public:
    BankDatabase(); // constructor initializes accounts

    // determine whether account number and PIN match those of an Account
    bool authenticateUser( int, int ); // returns true if Account authenticl

    double getAvailableBalance( int ); // get an available balance
    double getTotalBalance( int ); // get an Account's total balance
    void credit( int, double ); // add amount to Account balance
    void debit( int, double ); // subtract amount from Account balance
  private:
    vector< Account > accounts; // vector of the bank's Accounts

    // private utility function
    Account * getAccount( int ); // get pointer to Account object
}; // end class BankDatabase

#endif // BANK_DATABASE_H
