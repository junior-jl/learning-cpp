#include <string>
#include <iostream>

std::string ToLower (const std::string &str)
{
    std::string temp{str};
    for (int i = 0; i < str.length(); i++)
    {
        temp[i] = tolower(temp[i]);
    }
    return temp;
}

enum class Case{SENSITIVE, INSENSITIVE};
 
size_t Find(
const std::string &source,         //Source string to be searched
const std::string &search_string,  //The string to search for
Case searchCase = Case::INSENSITIVE,//Choose case sensitive/insensitive search
size_t offset = 0 ) {                //Start the search from this offset
    //Implementation
    if (searchCase == Case::INSENSITIVE)
    {
        std::string low_search_string{ToLower(search_string)};
        std::string low_source{ToLower(source)};
        return low_source.find(low_search_string, offset);
    }
    return source.find(search_string, offset);
    /*
    return position of the first character 
    of the substring, else std::string::npos
    */
}

int main()
{
    std::cout << Find("Opa meu amigo", "me") << std::endl;
    std::cout << Find("OPA MEU AMIGO", "me") << std::endl;
    std::cout << Find("Opa meu amigo", "ME") << std::endl;
    std::cout << Find("Opa meu amigo", "ME", Case::SENSITIVE) << std::endl;
    std::cout << Find("Opa MEU amigo", "me", Case::SENSITIVE) << std::endl;
    std::cout << Find("Opa meu amigo", "me", Case::SENSITIVE) << std::endl;
    return 0;
}