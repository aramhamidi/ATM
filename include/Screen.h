/**
 * @Author: Aram Hamidi <aramhamidi>
 * @Date:   2018-08-21T11:03:58-07:00
 * @Email:  aram.hamidi@getcruise.com
 * @Project: Laser_Driver_A53
 * @Filename: Screen.h
 * @Last modified by:   aramhamidi
 * @Last modified time: 2018-08-21T12:13:04-07:00
 */
  // Screen.h
  // Screen class definition. Represents the screen of the ATM.
#ifndef SCREEN_H
#define SCREEN_H

#include <string>
using std::string;

class Screen
{
  public:
    void displayMessage( string ) const; // output a message
    void displayMessageLine( string ) const; // output message with newline
    void displayDollarAmount( double ) const; // output a dollar amount
}; // end class Screen

#endif // SCREEN_H
