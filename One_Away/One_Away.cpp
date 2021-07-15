// One_Away.cpp :

#include <iostream>

bool One_Away(std::string word1, std::string word2);

int main()
{
    std::string word1;
    std::string word2;
    std::cout << "Please enter first word: ";
    std::cin >> word1;   
    std::cout << "Please enter second word: ";
    std::cin >> word2;
    std::cout<<std::boolalpha<<One_Away(word1, word2);
}

bool One_Away(std::string word1, std::string word2)
{
    int size_1 = word1.length();
    int size_2 = word2.length();
    if (abs(size_1 - size_2) > 1)
        return false;
    int count = 0;
    int i = 0;
    int j = 0;
    while (i < size_1 && j < size_2)
    {
        if (word1[i] != word2[j])
        {
            if (count == 1)
                return false;
            if (size_1 > size_2)
            {
                ++i;
            }
            else if (size_1 < size_2)
            {
                ++j;
            }
            else {
                ++i;
                ++j;
            }
            ++count;
        }
        else
        {
            ++i;
            ++j;
        }
    }
    if (i < size_1 || j < size_2)
    {
        ++count;
    }
    return count == 1;
}
