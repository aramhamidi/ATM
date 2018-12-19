/**
 * @Author: Aram Hamidi <aramhamidi>
 * @Date:   2018-08-21T11:11:19-07:00
 * @Email:  aram.hamidi@getcruise.com
 * @Project: Laser_Driver_A53
 * @Filename: DepositSlot.h
 * @Last modified by:   aramhamidi
 * @Last modified time: 2018-08-21T11:11:47-07:00
 */
// DepositSlot.h
// DepositSlot class definition. Represents the ATM's deposit slot.
#ifndef DEPOSIT_SLOT_H
#define DEPOSIT_SLOT_H

class DepositSlot
{
  public:
    bool isEnvelopeReceived() const; // tells whether envelope was received
}; // end class DepositSlot

#endif // DEPOSIT_SLOT_H
