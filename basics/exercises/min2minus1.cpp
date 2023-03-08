/* Write your function minimum here
The function should take two values of type int in its input parameters
and return nothing in the output*/
// Write your code here
void minimum (int &number1, int &number2){
    if (number1 < number2)
    {
        number1 = -1;
    }
    else if (number1 > number2)
    {
        number2 = -1;
    }
    else
    {
        number1 = -1;
        number2 = -1;
    }
}