// header file for stroing class
// member functions defined in class

#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H

class NumArr{

  // private vars

  private:
  float *numbers; // pointer to arr of the nums
  int arrSize; // size of arr

  //public vars/functions

  public:
  NumArr(int size); // constructor
  ~NumArr(); //deconstructor
  void storeNum(int index, float val); // func to store num arr no returns
  float retriveNum (int index); // func to output nums (i)
  float getHighest(); //func to get highest num in arr 
  float getLowest(); // func to get lowest num in arr
  float getAvg(); // ufnc to get avg num in arr
};

#endif
// WRITE YOUR CODE HERE
