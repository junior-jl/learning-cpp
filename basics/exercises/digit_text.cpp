/* Write your function digit_text here
The function should take a value of type int in its input parameters
and return a string in the output*/
string digit_text (int number){
    string result ;
    // Write your code here
    switch(number)
    {
        case 1:
            result = "one";
            break;
        case 2:
            result = "two";
            break;
        case 3:
            result = "three";
            break;
        case 4:
            result = "four";
            break;
        case 5:
            result = "five";
            break;
        default:
            result = "invalid number";
    }
    return result;
}