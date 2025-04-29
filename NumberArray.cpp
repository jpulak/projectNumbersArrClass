// Implementation file for the NumberArray class
// member functions programmed 

#include <iostream>
#include "NumberArray.h"
using namespace std;

//constructor

NumArr::NumArr(int size)
{
  arrSize = size;
  numbers = new float[arrSize]; //dynamically allocate arr
}

//deconstrctor

NumArr::~NumArr()
{
  delete[] numbers; // free dynamic
}

//func to store gioven number at index val is ueser inputed from float number var
//'Store a number in any element of the array'

void NumArr::storeNum(int index, float val)
{
  if (index >= 0 && index < arrSize)
  {
    numbers[index] = val;
  } 
  else 
  {
    cout << "x_xInvalid x_x" << endl;
  }
}

// func to be able to get number from arr at any given index to output
//'Retrieve a number from any element of the array'

float NumArr::retriveNum(int index)
{
  if (index >= 0 && index < arrSize)
  {
    return numbers[index];
  } 
  else
  {
    cout << "x_xInvalid x_x" << endl;
    return 0.0;
  }
}

// func to get highest num from arr
//'Return the highest value stored in the array'

float NumArr:: getHighest()
{
  float highest = numbers[0];
  for (int i = 1; i < arrSize; i++)
  {
    if (numbers[i] > highest)
    {
      highest = numbers[i];
    }
  }
  return highest;
}

// func to get lowest num from arr
//'Return the lowest value stored in the array'

float NumArr::getLowest()
{
  float lowest = numbers[0];
  for (int i = 1; i < arrSize; i++)
  {
    if (numbers[i] < lowest)
    {
      lowest = numbers[i];
    }
  }
  return lowest;
}

// fumc to get avg num of arr
//'Return the average of all the numbers stored in the array'

float NumArr:: getAvg()
{
  float sum = 0.0;
  float avg = 0.0;
  for (int i = 0; i < arrSize; i++)
  {
    sum += numbers[i];
  }
  avg = sum / arrSize;
  return avg;
}

