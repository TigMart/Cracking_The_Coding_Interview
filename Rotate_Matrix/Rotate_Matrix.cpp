// Rotate_Matrix.cpp :

#include <iostream>

typedef unsigned int uint;

int** RotateMatrix(int** matrix, uint size);

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
                matrix[row][col] = rand() % 10;
                std::cout << matrix[row][col] << " ";
            }
        }
        std::cout << std::endl;
        std::cout << "Matrix Rotate 90 digress: ";
        int** RotatedMatrix = RotateMatrix(matrix, size);
        for (uint row = 0; row < size; ++row)
        {
            std::cout << std::endl;
            for (uint col = 0; col < size; ++col)
            {
                std::cout << RotatedMatrix[row][col] << " ";

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

int** RotateMatrix(int** matrix, uint size)
{
    for (uint row = 0; row < size/2; ++row)
    {
        for (uint col = row; col < size-1-row; ++col)
        {
            int tmp = matrix[row][col];
            matrix[row][col] = matrix[size-1-col][row];
            matrix[size-1-col][row]=matrix[size-1-row][size-1-col];
            matrix[size - 1 - row][size - 1 - col] = matrix[col][size - 1 - row];
            matrix[col][size - 1 - row] = tmp;
        }
    }
    return matrix;
}  
