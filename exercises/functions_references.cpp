/*
Implement the following functions

void Add(int a,int b, int &result) ;    //Add two numbers and return the result through a reference parameter
void Factorial(int a, int &result) ;    //Find factorial of a number and return that through a reference parameter
void Swap(int &a, int &b) ;            //Swap two numbers through reference arguments
*/

#include <iostream>

void Add(int a,int b, int &result) ;   
void Factorial(int a, int &result) ;    
void Swap(int &a, int &b) ; 

int main()
{
    using namespace std;
    int n1 = 3;
    int n2 = 4;
    int x = 0;
    Add(n1, n2, x);
    int n3;
    cout << n1 << " + " << n2 << " = " << x << endl;
    cout << n1 << " + " << n2 << " = " << x << endl;
    cout << "Before swap: " << endl;
    cout << "n1: " << n1 << endl;
    cout << "n2: " << n2 << endl;
    Swap(n1, n2);
    cout << "After swap: " << endl;
    cout << "n1: " << n1 << endl;
    cout << "n2: " << n2 << endl;
    Factorial(n1, n3);
    cout << "Factorial of " << n1 << " = " << n3 << endl;
    Factorial(n2, n3);
    cout << "Factorial of " << n2 << " = " << n3 << endl;

    return 0;
}

void Add(int a,int b, int &result)
{
    result = a + b;
}

void Factorial(int a, int &result)
{
    result = 1;
    for (int i = 1; i <= a; i++)
    {
        result *= i;
    }
} 

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}