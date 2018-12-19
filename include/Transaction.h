/**
 * @Author: Aram Hamidi <aramhamidi>
 * @Date:   2018-08-21T11:43:17-07:00
 * @Email:  aram.hamidi@getcruise.com
 * @Project: Laser_Driver_A53
 * @Filename: Transaction.h
 * @Last modified by:   aramhamidi
 * @Last modified time: 2018-08-21T13:32:11-07:00
 */
// Transaction.h
// Transaction abstract base class definition.
#ifndef TRANSACTION_H
#define TRANSACTION_H

class Screen; // forward declaration of class Screen
class BankDatabase; // forward declaration of class BankDatabase

class Transaction
{
  public:
    // constructor initializes common features of all Transactions
    Transaction( int, Screen &, BankDatabase & );
    virtual ~Transaction() { } // virtual destructor with empty body
    int getAccountNumber() const; // return account number
    Screen &getScreen() const; // return reference to screen
    BankDatabase &getBankDatabase() const; // return reference to database

    // pure virtual function to perform the transaction
    virtual void execute() = 0; // overridden in derived classes
  private:
    int accountNumber; // indicates account involved
    Screen &screen; // reference to the screen of the ATM
    BankDatabase &bankDatabase; // reference to the account info database
}; // end class Transaction

#endif // TRANSACTION_H
