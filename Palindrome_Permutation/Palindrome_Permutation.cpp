// Palindrome_Permutation.cpp: 

#include <iostream>
#include <string>

bool Palindrome_Permutation(std::string str);

int main()
{
    std::string sentence;
    std::cout << "Please enter any sentence: ";
    std::getline(std::cin, sentence);
    std::cout << "Palindrome_Permutation " << std::boolalpha << Palindrome_Permutation(sentence);
    return 0;
}


bool Palindrome_Permutation(std::string str)
{
    bool odd = false;
    int ascii[128] = { 0 };
    for (auto character : str)
    {
        if (character == ' ')
            continue;
        ++ascii[(int)character];
    }
    for (int i = 0; i < 128; ++i)
    {
        if (ascii[i] % 2 == 1 && odd) return false;
        if (ascii[i] % 2 == 1 && !odd) odd = !odd;
    }
    return true;
}
