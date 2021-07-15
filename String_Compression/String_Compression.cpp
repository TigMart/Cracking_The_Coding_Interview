// String_Compression.cpp :

#include <iostream>
#include <string>

std::string String_Compression(std::string str);

int main()
{
    std::string word;
    std::cout << "Please enter any word: ";
    std::cin >> word;
    std::cout << String_Compression(word);
    return 0;
}

std::string String_Compression(std::string str)
{
    int count = 1;
    std::string str2="";
    str2 += str[0];
    char ch = str[0];
    for (int i = 1; i < str.length(); ++i)
    {
        if (ch == str[i])
            ++count;
        else if (ch != str[i]) 
        {
            str2 += count + 48;
            ch = str[i];
            str2 += ch;
            count = 1;
        }
    }
    str2 += count + 48;
    return str2;
}
