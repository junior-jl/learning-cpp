/*
Implement the following functions using pointer arguments only

int Add(int *a, int *b) ;    //Add two numbers and return the sum
void AddVal(int *a, int *b, int *result); //Add two numbers and return the sum through the third pointer argument
void Swap(int *a, int *b) ;  //Swap the value of two integers
void Factorial(int *a, int *result);       //Generate the factorial of a number and return that through the second pointer argument
*/

#include <iostream>

int Add(int *a, int *b)
{
    return *a + *b;
}

void AddVal(int *a, int *b, int *result)
{
    *result = *a + *b;
}

void Swap(int *a, int *b)
{
    int temp{*a};
    *a = *b;
    *b = temp;
}

void Factorial(int *a, int *result)
{
    *result = 1;
    for(int i = 1; i <= *a; i++)
    {
        *result *= i;
    }
}

int main()
{
    using namespace std;
    int n1 = 3;
    int n2 = 4;
    int x = Add(&n1, &n2);
    int n3;
    AddVal(&n1, &n2, &n3);
    cout << n1 << " + " << n2 << " = " << x << endl;
    cout << n1 << " + " << n2 << " = " << n3 << endl;
    cout << "Before swap: " << endl;
    cout << "n1: " << n1 << endl;
    cout << "n2: " << n2 << endl;
    Swap(&n1, &n2);
    cout << "After swap: " << endl;
    cout << "n1: " << n1 << endl;
    cout << "n2: " << n2 << endl;
    Factorial(&n1, &n3);
    cout << "Factorial of " << n1 << " = " << n3 << endl;
    Factorial(&n2, &n3);
    cout << "Factorial of " << n2 << " = " << n3 << endl;

    return 0;
}