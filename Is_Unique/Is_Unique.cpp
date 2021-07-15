// Is_Unique.cpp : 

#include <iostream>
#include <string>

bool Is_Unique(std::string str);

int main()
{
    std::string word;
    std::cout << "Please enter any word! ";
    std::cin >> word;
    std::cout << "Check Is unique you word? " << std::boolalpha << Is_Unique(word);
    return 0;
}

bool Is_Unique(std::string str)
{
    int j = 1;
    for (int i = 0; i < str.length(); ++i)
    {
        for (; j < str.length(); ++j)
        {
            if (str[i] == str[j])
                return false;
        }
        j = i+1;
        ++j;
    }
    return true;
}
