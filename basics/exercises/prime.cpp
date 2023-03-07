#include <iostream>

using namespace std;

int main()
{
// Number to check if it is prime    
int number = 3;
bool isPrime = true;
// The smaller prime is 2
if (number <= 1)
{
    isPrime = false;
}
else
{
    for (int i = 2; i < number / 2; i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break;
        }
    }
}

isPrime ? cout << "prime" : cout << "not prime";

return 0;
}