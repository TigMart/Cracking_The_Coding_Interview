// Zero_Matrix.cpp : 

#include <iostream>
#include <vector>

typedef unsigned int uint;

int** ZeroMatrix(int** matrix, const uint size);

int main()
{
    uint size = 0;
    std::cout << "Please enter Matrix size: ";
    std::cin >> size;
    int** matrix = new (std::nothrow) int* [size];
    if (matrix == nullptr) {
        std::cout << "Error: Allocated memory ";
    }
    else
    {
        for (uint row = 0; row < size; ++row)
        {
            matrix[row] = new int[size];
            std::cout << std::endl;

            for (uint col = 0; col < size; ++col)
            {
                matrix[row][col] = rand()%10;
                std::cout << matrix[row][col] << " ";
            }
        }
        std::cout << std::endl;
        std::cout << "If an element in an MxN matrix is 0, its entire row and column are set to 0: ";
        int** zero_matrix = ZeroMatrix(matrix, size);
        for (uint row = 0; row < size; ++row)
        {
            std::cout << std::endl;
            for (uint col = 0; col < size; ++col)
            {
                std::cout << zero_matrix[row][col] << " ";
            }
        }
        for (int i = 0; i < size; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;
    }
    return 0;
}

int** ZeroMatrix(int** matrix, const uint size)
{
    std::vector<int> r;
    std::vector<int> c;
    for (uint row = 0; row < size; ++row)
    {
        for (uint col = 0; col < size; ++col)
        {
            if (matrix[row][col] == 0)
            {
                r.push_back(row);
                c.push_back(col);
            }
        }
    }
    for (int i = 0; i < size ; ++i)
    {
        for (int j = 0; j < r.size(); ++j)
        {
             matrix[r[j]][i] = 0;
             matrix[i][c[j]] = 0;
        }
    }
    return matrix;
}
