/**
 * @Author: Aram Hamidi <aramhamidi>
 * @Date:   2018-08-21T11:09:47-07:00
 * @Email:  aram.hamidi@getcruise.com
 * @Project: Laser_Driver_A53
 * @Filename: CashDispenser.cpp
 * @Last modified by:   aramhamidi
 * @Last modified time: 2018-08-21T11:10:54-07:00
 */

// CashDispenser.cpp
// Member-function definitions for class CashDispenser.
#include "CashDispenser.h" // CashDispenser class definition

// CashDispenser default constructor initializes count to default
CashDispenser::CashDispenser()
{
  count = INITIAL_COUNT; // set count attribute to default
} // end CashDispenser default constructor

// simulates dispensing of specified amount of cash; assumes enough cash
// is available (previous call to isSufficientCashAvailable returned true)
void CashDispenser::dispenseCash( int amount )
{
  int billsRequired = amount / 20; // number of $20 bills required
  count -= billsRequired; // update the count of bills
} // end function dispenseCash

// indicates whether cash dispenser can dispense desired amount
bool CashDispenser::isSufficientCashAvailable( int amount ) const
{
  int billsRequired = amount / 20; // number of $20 bills required

  if ( count >= billsRequired )
    return true; // enough bills are available
  else
    return false; // not enough bills are available
} // end function isSufficientCashAvailable
