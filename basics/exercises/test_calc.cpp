#include <iostream>

double add(double number1, double number2)
{
  return number1 + number2;
}

double subtract(double number1, double number2)
{
  return number1 - number2;
}

double multiply(double number1, double number2)
{
  return number1 * number2;
}

double divide(double number1, double number2)
{
  return number1 / number2;
}

double test(double number1, char operate, double number2) {
  //double result;
  // Write your code here
  switch(operate)
  {
    case '+':
      return add(number1, number2);
      break;
    case '-':
      return subtract(number1, number2);
      break;
    case '*':
      return multiply(number1, number2);
      break;
    case '/':
      return divide(number1, number2);
      break;
    default:
      return -1;
  }
  //return result;
}

int main()
{
    double n1 = 7.9, n2 = 6.2;
    std::cout << test(n1, '+', n2);
    return 0;
}