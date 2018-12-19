/**
 * @Author: Aram Hamidi <aramhamidi>
 * @Date:   2018-08-21T11:06:02-07:00
 * @Email:  aram.hamidi@getcruise.com
 * @Project: Laser_Driver_A53
 * @Filename: Keypad.h
 * @Last modified by:   aramhamidi
 * @Last modified time: 2018-08-21T11:06:28-07:00
 */
// Keypad.h
// Keypad class definition. Represents the keypad of the ATM.
#ifndef KEYPAD_H
#define KEYPAD_H

class Keypad
{
  public:
    int getInput() const; // return an integer value entered by user
}; // end class Keypad

#endif // KEYPAD_H
