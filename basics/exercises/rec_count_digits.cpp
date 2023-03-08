#include <iostream>


/* Write your recursive function count_digits here
The function should take the value of type int in its input parameters
and return int value in the output*/

int count_digits(int number) {
  if (number > -10 && number < 10)
  {
    return 1;
  }
  else
  {
    return 1 + count_digits(number / 10);
  }
}

int main()
{
    std::cout << "digits = " << count_digits(33);
    return 0;
}