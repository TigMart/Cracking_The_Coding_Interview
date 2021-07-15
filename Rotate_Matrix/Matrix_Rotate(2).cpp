// Matrix_Rotation.cpp :

#include <iostream>
#include <vector>

void rotate(std::vector<std::vector<int>>& matrix);
void reverse(std::vector<int>& v);

int main()
{
    std::vector<std::vector<int> > vec;
    std::vector<int> a = { 1,2,3,6 };
    std::vector<int> b = { 4,5,6,8 };
    std::vector<int> c = { 7,8,9,9 };
    std::vector<int> d = { 7,8,9,9 };
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    vec.push_back(d);
    rotate(vec);
    return 0;
}

void reverse(std::vector<int>& v)
{
    int sv = v.size();
    int i = 0;
    int j = sv - 1;
    while (i < j)
    {
        std::swap(v[i], v[j]);
        ++i;
        --j;
    }
}

void rotate(std::vector<std::vector<int>>& matrix)
{
    int s1 = matrix.size();
    int s2 = matrix[0].size();
    for (int i = 0; i < s1; ++i)
    {
        for (int j = i; j < s2; ++j)
        {
            std::swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < s1; ++i)
    {
        reverse(matrix[i]);
    }
    //cout
    for (int row = 0; row < s1; ++row)
    {
        std::cout << std::endl;

        for (int col = 0; col < s1; ++col)
        {
            std::cout << matrix[row][col] << " ";
        }
    }
}
