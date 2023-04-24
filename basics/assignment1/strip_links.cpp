#include <string>
#include <iostream>
#include <sstream>

std::string StripLineLink(const std::string &source);
std::string StripLinks(int num_of_lines, const std::string &source)
{
    std::string output{};
    std::istringstream ist{source};
    for (int i = 0; i < num_of_lines; i++)
    {
        std::string line;
        std::getline(ist, line);
        line = StripLineLink(line);
        if (line == "")
        {
            continue;
        }
        else
        {
            output.append(line);
        }
    }
    return output;

}

std::string StripLineLink(const std::string &source)
{
    std::string output{};
    std::string start{"a href=\""};
    if (source.find(start) == std::string::npos)
    {
        return output;
    }
    else
    {
        auto idx = source.find(start) + start.length();
        auto idx2 = source.find("\"", idx);
        output.append(source.substr(idx, idx2-idx)+",");
        idx = source.find(">", idx2) + 1;
        while(source[idx + 1] == '<')
        {
            idx = source.find("<", idx);
        }
        idx2 = source.find("<", idx);
        output.append(source.substr(idx, idx2-idx)+"\n");
        return output;
    }
    
}
int main()
{
    std::cout << "Test 1" << std::endl;
    std::string s1{"<p><a href=\"http://www.quackit.com/html/tutorial/html_links.cfm\">Example Link</a></p>"};
    std::cout << s1 << std::endl;
    std::string s2{StripLineLink(s1)};
    std::cout << s2 << std::endl;
    std::cout << "Test 2" << std::endl;
    std::string s3{"<li id=\"n-mainpage-description\"><a href=\"/wiki/Main_Page\" title=\"Visit the main page [z]\" accesskey=\"z\">Main page</a></li>"};
    std::cout << s3 << std::endl;
    std::string s4{StripLinks(1,s3)};
    std::cout << s4 << std::endl;

    // Test big string 
    std::string big{};
    std::string line{};
    while (std::getline(std::cin, line))
    {
        if (line.empty())
            break;
        big.append(line + '\n');
    }
    std::cout << big << std::endl;
    std::cout << StripLinks(12,big) << std::endl;

    
    return 0;
}