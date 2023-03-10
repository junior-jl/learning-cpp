#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int size = 10;

  //Declare dynamic array
  int *Array;

  //Initialize dynamic array
  Array = new int[size];

  for (int i = 0; i < size; i++)
  {
    Array[i] = rand();
  }

  //Prints dynamic array
  cout << "Elements of array: ";
  for (int i = 0; i < size; i++)
  {
    cout << Array[i] << " ";
  }
  cout << endl;

  //Calculate mean and print
  float mean = 0;
  for (int i = 0; i < size; i++)
  {
    mean += Array[i] / size;
  }
  cout << "Mean: " << mean << endl;

  //Calculate standard deviation and print
  float stdDev = 0;
  for (int i = 0; i < size; i++)
  {
    stdDev += pow((Array[i] - mean), 2) / size;
  }
  stdDev = sqrt(stdDev);
  cout << "Standard Deviation: " << stdDev << endl;

  // Deletes a memory allocated to dynamic array
  delete[] Array;
}