/**
 * @Author: Aram Hamidi <aramhamidi>
 * @Date:   2018-08-21T11:11:57-07:00
 * @Email:  aram.hamidi@getcruise.com
 * @Project: Laser_Driver_A53
 * @Filename: DepositeSlot.cpp
 * @Last modified by:   aramhamidi
 * @Last modified time: 2018-08-21T11:12:41-07:00
 */
// DepositSlot.cpp
// Member-function definition for class DepositSlot.
#include "DepositSlot.h" // DepositSlot class definiton

// indicates whether envelope was received (always returns true,
// because this is only a software simulation of a real deposit slot)
bool DepositSlot::isEnvelopeReceived() const
{
 return true; // deposit envelope was received
} // end function isEnvelopeReceived
