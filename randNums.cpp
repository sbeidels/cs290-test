/**********************************************************
**Name: Sarah Beidelschies
**Date: 1/12/15
**Description:  A random number program with user input 
**for the upper and lower bounds.
**********************************************************/

#include<iostream>  //needed to use cin and cout
#include<cstdlib>  //needed to use rand() function
using namespace std;

int main()
{
  int upperBound; //Upper bound of range
  int lowerBound; //Lower bound of range
  int range; //range of upper and lower bound
  int randNum;  //random number generated

  //Get user input values
  cout<<"Please enter the upper bound integer: ";
  cin >> upperBound;
  cout<<"Please enter the lower bound integer: ";
  cin >> lowerBound;
  //Calculations
  range = upperBound - lowerBound + 1; //inclusive range
  //Random number generation and printing 5 times
  randNum = rand()%range + lowerBound;
  cout << randNum << endl;
  randNum = rand()%range + lowerBound;
  cout << randNum <<endl;
  randNum = rand()%range + lowerBound;
  cout << randNum <<endl;
  randNum = rand()%range + lowerBound;
  cout << randNum <<endl;
  randNum = rand()%range + lowerBound;
  cout << randNum <<endl;

  return 0;
}

