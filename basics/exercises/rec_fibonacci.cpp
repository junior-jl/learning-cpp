/* Write your recursive function fibonacci here
The function should take a value of type int in its input parameters
and return int value in the output*/

int fibonacci(int n) {
    // Invalid cases
    if (n < 0)
    {
        return -1;
    }
    // Base case
    if (n == 0 || n == 1)
    {
        return n;
    }
    // Recursive case
    else
    {
        return fibonacci(n - 2) + fibonacci(n - 1);
    }

}