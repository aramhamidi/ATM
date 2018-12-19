/**
 * @Author: Aram Hamidi <aramhamidi>
 * @Date:   2018-08-21T11:46:09-07:00
 * @Email:  aram.hamidi@getcruise.com
 * @Project: Laser_Driver_A53
 * @Filename: BalanceInquiry.h
 * @Last modified by:   aramhamidi
 * @Last modified time: 2018-08-21T11:46:40-07:00
 */
// BalanceInquiry.h
// BalanceInquiry class definition. Represents a balance inquiry.
#ifndef BALANCE_INQUIRY_H
#define BALANCE_INQUIRY_H

#include "Transaction.h" // Transaction class definition

class BalanceInquiry : public Transaction
{
  public:
    BalanceInquiry( int, Screen &, BankDatabase & ); // constructor
    virtual void execute(); // perform the transaction
}; // end class BalanceInquiry

#endif // BALANCE_INQUIRY_
