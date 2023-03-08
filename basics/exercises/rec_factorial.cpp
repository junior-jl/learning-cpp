#include <iostream>


int fact(int number)
{
    // The factorial is only defined for positive numbers
    if (number < 0)
    {
        return -1;
    }
    // Base case (0! = 1; 1! = 1)
    if (number == 0 || number == 1)
    {
        return 1;
    }
    // Recursive case
    else
    {
        return number * fact(number - 1);
    }
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << "! = " << fact(i) << std::endl;
    }
    return 0;
}