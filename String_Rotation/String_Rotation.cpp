// String_Rotation.cpp :

#include <iostream>
#include <string>

bool StringRotation(std::string str1, std::string str2);

int main()
{
    std::string word1;
    std::string word2;
    std::cout << "Please enter first word: ";
    std::cin >> word1;
    std::cout << "Please enter second word: ";
    std::cin >> word2;
    std::cout << "String_Rotation: " << std::boolalpha << StringRotation(word1, word2);
    return 0;
}

bool StringRotation(std::string str1, std::string str2)
{
    if (str1.length() != str2.length())
    {
        return false;
    } 
    std::string temp = str1 + str1;
    std::cout << temp.find(str2);
    return (temp.find(str2) != std::string::npos);
}
