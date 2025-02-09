/**
 * @file main.cpp
 * @author Lizette Navarrete
 * @date 2025-02-08
 * @brief Tests the Vector class objects
 * 
 * Runs test from the class and makes sure everything is working
 */


#include <iostream>
#include "Vector.h"

using namespace std;

int main(){
  // VARIABLES
  Vector userVector;
  Vector newVector;
  int num = 0;
  
  
  // Test for push_back
  cout << "How many elements do you want in the vector: userVector?" << endl;
  cin >> num;
  
  for(int i = 0; i < num; i++){
    userVector.push_back(i);
  }
  cout << "userVector contains the numbers: " << endl; 
  for(int i = 0; i < userVector.size(); i++)
    cout << userVector[i] << endl;
  
  // Test for changing the elements

  cout << "Index 3 for userVector is " << userVector[3] << ". What element would you like to replace it with (INT-value)";
  cin >> num;
  
  userVector[3] = num;

  cout << "Here is your new userVector with the changed element:" << endl;
  
  for(int i = 0; i < userVector.size(); i++)
    cout << userVector[i] << endl;

  // Test for newVector = userVector (ASSIGNMENT OPERATOR)

  newVector.push_back(5);
  newVector.push_back(2);

  cout << "Here are the newVector elements" << endl; 
  for(int i = 0; i < newVector.size(); i++)
    cout << newVector[i] << endl;

  cout << "Now we are equaling the content of userVector to the newVector: " << endl;
  cout << "========" << endl;
  cout << "RESULTS: " << endl; 

  newVector = userVector;

  for(int i = 0; i < newVector.size(); i++)
    cout << newVector[i] << endl;

  // FINAL TEST: Copy constructor
  Vector copy(userVector);

  cout << "Now we are initializing a copy constructor Vector called copy. Here is its contents: " << endl; 
  for(int i = 0; i < copy.size();i++)
    cout << copy[i] << endl;

  cout << "That is all for now. Goodbye :)" << endl;

  return 0;
}
