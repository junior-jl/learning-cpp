// Find whether the given number is palindrome or not, and then
// print your output to the console
#include <iostream>

using namespace std;

int main()
{
int number = 3112123;
int aux = number;
int aux2 = 0;
int prod = 1;
while (aux > 0)
{
    aux2 *= 10;
    aux2 += aux % 10;
    aux /= 10;
}
number == aux2 ? cout << "is palindrome" : cout << "is not palindrome";
}