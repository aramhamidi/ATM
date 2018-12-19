/**
 * @Author: Aram Hamidi <aramhamidi>
 * @Date:   2018-08-21T11:07:50-07:00
 * @Email:  aram.hamidi@getcruise.com
 * @Project: Laser_Driver_A53
 * @Filename: CashDispenser.h
 * @Last modified by:   aramhamidi
 * @Last modified time: 2018-08-21T11:09:40-07:00
 */
// CashDispenser.h
// CashDispenser class definition. Represents the ATM's cash dispenser.
#ifndef CASH_DISPENSER_H
#define CASH_DISPENSER_H

class CashDispenser
{
  public:
    CashDispenser(); // constructor initializes bill count to 500
    // simulates dispensing of specified amount of cash
    void dispenseCash( int );
    // indicates whether cash dispenser can dispense desired amount
    bool isSufficientCashAvailable( int ) const;
    
  private:
    const static int INITIAL_COUNT = 500;
    int count; // number of $20 bills remaining
}; // end class CashDispenser

#endif // CASH_DISPENSER_H
