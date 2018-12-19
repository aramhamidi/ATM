/**
 * @Author: Aram Hamidi <aramhamidi>
 * @Date:   2018-08-21T11:49:06-07:00
 * @Email:  aram.hamidi@getcruise.com
 * @Project: Laser_Driver_A53
 * @Filename: Withdrawal.h
 * @Last modified by:   aramhamidi
 * @Last modified time: 2018-08-21T11:49:53-07:00
 */
// Withdrawal.h
// Withdrawal class definition. Represents a withdrawal transaction.
#ifndef WITHDRAWAL_H
#define WITHDRAWAL_H

#include "Transaction.h" // Transaction class definition
class Keypad; // forward declaration of class Keypad
class CashDispenser; // forward declaration of class CashDispenser

class Withdrawal : public Transaction
{
  public:
    Withdrawal( int, Screen &, BankDatabase &, Keypad &, CashDispenser & );
    virtual void execute(); // perform the transaction
  private:
    int amount; // amount to withdraw
    Keypad &keypad; // reference to ATM's keypad
    CashDispenser &cashDispenser; // reference to ATM's cash dispenser
    int displayMenuOfAmounts() const; // display the withdrawal menu
}; // end class Withdrawal

#endif // WITHDRAWAL_H
