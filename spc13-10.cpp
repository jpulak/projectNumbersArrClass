// Chapter 13, Programming Challenge 10: Number Array Class
// driver function to execute class : take in array of numbers and manipulate

#include <iostream>
#include "NumberArray.h"
using namespace std;

// driver func

int main(){
  int arrSize;

  // get user input of size array

  //cout << "Enter array size"; // test case three failed for some reason with this 
  cin >> arrSize;

  //create object

  NumArr arr(arrSize); 

  //take in user numbers

  float number;
  for (int i = 0; i < arrSize; i++)
  {
    //cout << "Enter numbers: "; // test case three failed for some reason with this 
    cin >> number;
    arr.storeNum(i, number);
  }

  // output array in given form

  cout << "Here are the numbers you entered:" << endl;
  for (int i = 0; i < arrSize; i++)
  {
    cout << "Number " << (i + 1) << ": " << arr.retriveNum(i) << endl; // retrive num func
  }

  // output based on test case demands

  cout << "\n---------------------------------" << endl;
  cout << "The average of those numbers is: " << arr.getAvg() << endl;
  cout << "The highest of those numbers is: " << arr.getHighest() << endl;
  cout << "The lowest of those numbers is: " << arr.getLowest() << endl;
  return 0;
}
