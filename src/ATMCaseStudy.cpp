/**
 * @Author: Aram Hamidi <aramhamidi>
 * @Date:   2018-08-21T12:00:57-07:00
 * @Email:  aram.hamidi@getcruise.com
 * @Project: Laser_Driver_A53
 * @Filename: ATMCaseStudy.cpp
 * @Last modified by:   aramhamidi
 * @Last modified time: 2018-08-21T12:01:35-07:00
 */
// ATMCaseStudy.cpp
// Driver program for the ATM case study.
#include "ATM.h" // ATM class definition
// #include "ATMConfig.h"
// main function creates and runs the ATM
int main()
{
  ATM atm; // create an ATM object
  // fprintf(stdout,"Version %d.%d\n", ATM_VERSION_MAJOR,ATM_VERSION_MINOR);
  atm.run(); // tell the ATM to start
  return 0;
} // end main
