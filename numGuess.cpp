/*****************************************************************
**Author: Sarah Beidelschies
**Date:  1/18/15
**Description:  User guesses integers until correct random number
**is guessed.
****************************************************************/

#include<iostream>  //used for input output
#include<cstdlib>  //needed for rand function
#include<time.h>  //used for rand function seeding
using namespace std;

int main()
{

  int guessNum;  //number user guessed
  int randNum;   //generated random number
  int count = 1;  //counter that tracks number of guesses

  //get random number
  srand(time(NULL));
  randNum = rand()%100 +1;
  
  //print random number for testing purposes
  //cout<<randNum<<endl;
  
  //get user guess
  cout<<"Guess an integer between 1-100!: ";
  
  //input validation
  while(!(cin>>guessNum))
	{
	  cout<<"Invalid input.  Please enter an integer: ";
  	  cin.clear();
	  cin.ignore(10,'\n');
	}
  
  //determine if number is correct, high or low

  while(guessNum != randNum) //if false, guess is correct
	{
	  if (guessNum < randNum)
	    cout<<"Too low.  Try again!: " ;
	  else
	    cout<<"Too high.  Try again!: " ;
	  count++;
 	 
          //input vaidation
 	  while(!(cin>>guessNum))
	  {
	    cout<<"Invalid input.  Please enter an integer: ";
	    cin.clear();
	    cin.ignore(10,'\n');
	  }
          
	}
  //print number of guesses to get to correct number
  cout<<"Correct!  That took "<<count<<" tries!"<<endl;

  return 0;
}
