/**
 * @Author: Aram Hamidi <aramhamidi>
 * @Date:   2018-08-21T11:04:58-07:00
 * @Email:  aram.hamidi@getcruise.com
 * @Project: Laser_Driver_A53
 * @Filename: Screem.cpp
 * @Last modified by:   aramhamidi
 * @Last modified time: 2018-08-21T12:15:51-07:00
 */
// Screen.cpp
// Member-function definitions for class Screen.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "Screen.h" // Screen class definition

// output a message without a newline
void Screen::displayMessage(string message ) const
{
  cout << message;
} // end function displayMessage

// output a message with a newline
void Screen::displayMessageLine(string message ) const
{
  cout << message << endl;
} // end function displayMessageLine

// output a dollar amount
void Screen::displayDollarAmount( double amount ) const
{
  cout << fixed << setprecision( 2 ) << "$" << amount;
} // end function displayDollarAmount
