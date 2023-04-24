#include <cstring>
#include <string>
#include <iostream>
/*
std::string ToUpper(const std::string &str)
{
    char c_st[str.length() + 1];
    strcpy(c_st, str.c_str());
    for (int i = 0; i < str.length() + 1; i++)
    {
        c_st[i] = toupper(c_st[i]);
    }
    std::string temp(c_st);
    return temp;

}
*/
std::string ToUpper(const std::string &str)
{
    std::string temp{str};
    for (int i = 0; i < str.length(); i++)
    {
        temp[i] = toupper(temp[i]);
    }
    return temp;
}

int main()
{
    std::string s;
    std::getline(std::cin, s);
    std::cout << ToUpper(s) << std::endl;
    return 0;
}