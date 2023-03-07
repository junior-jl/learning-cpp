// Convert decimal do binary
#include <iostream>

using namespace std;

int main()
{
int decimal = 10;
int binary = 0;
int prod = 1;
while (decimal > 0)
{
    binary += (decimal % 2) * prod;
    decimal /= 2;
    prod *= 10;
}
cout << binary;
}