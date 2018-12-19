/**
 * @Author: Aram Hamidi <aramhamidi>
 * @Date:   2018-08-21T11:06:45-07:00
 * @Email:  aram.hamidi@getcruise.com
 * @Project: Laser_Driver_A53
 * @Filename: Keypad.cpp
 * @Last modified by:   aramhamidi
 * @Last modified time: 2018-08-21T13:24:32-07:00
 */
// Keypad.cpp
// Member-function definition for class Keypad (the ATM's keypad).
#include <iostream>
using std::cin;

#include "Keypad.h" // Keypad class definition

// return an integer value entered by user
int Keypad::getInput() const
{
  int input; // variable to store the input
  cin >> input; // we assume that user enters an integer
  return input; // return the value entered by user
} // end function getInput
