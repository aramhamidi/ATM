/**
 * @Author: Aram Hamidi <aramhamidi>
 * @Date:   2018-08-21T11:56:52-07:00
 * @Email:  aram.hamidi@getcruise.com
 * @Project: Laser_Driver_A53
 * @Filename: Deposite.h
 * @Last modified by:   aramhamidi
 * @Last modified time: 2018-09-12T11:43:31-07:00
 */
// Deposit.h
// Deposit class definition. Represents a deposit transaction.
#ifndef DEPOSIT_H
#define DEPOSIT_H

#include "Transaction.h" // Transaction class definition
class Keypad; // forward declaration of class Keypad
class DepositSlot; // forward declaration of class DepositSlot

class Deposit : public Transaction
{
  public:
    Deposit( int, Screen &, BankDatabase &, Keypad &, DepositSlot & );
    virtual void execute(); // perform the transaction
  private:
    double amount; // amount to deposit
    Keypad &keypad; // reference to ATM's keypad
    DepositSlot &depositSlot; // reference to ATM's deposit slot
    double promptForDepositAmount() const; // get deposit amount from user
}; // end class Deposit

#endif // DEPOSIT_H
