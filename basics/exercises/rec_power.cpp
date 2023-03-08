/* Write your recursive function power here
The function should take two values of type int in its input parameters
and return int value in the output*/

int power (int base , int exponent ) {
    if (exponent == 0)
    {
        return 1;
    }
    else
    {
        return base * power(base, exponent - 1);
    }
    return 0;
}