// Check_Permutation.cpp :

#include <iostream>
#include <string>

bool Check_Permitation(std::string str1, std::string str2);

int main()
{
    std::string word1;
    std::string word2;
    std::cout << "Please enter first word: ";
    std::cin >> word1; 
    std::cout << "Please enter second word: ";
    std::cin >> word2;
    std::cout << "Check_Permitation: " << std::boolalpha << Check_Permitation(word1, word2);
    return 0;
}

bool Check_Permitation(std::string str1, std::string str2)
{
    int count[256] = { 0 };
    int i;
    for (i = 0; str1[i] && str2[i]; ++i)
    {
        ++count[str1[i]];
        --count[str2[i]];
    }
    if (str1[i] || str2[i])
        return false;
    for (i = 0; i < 256; ++i) {
         if (count[i]) return false;
    }
    return true;
}
