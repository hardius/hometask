#include <iostream>
#include <fstream>
#include <stdexcept>

double** multMatrix(double lambda, double** M, size_t rows, size_t cols)
{
    for (size_t r = 0; r < rows; ++r)
        for (size_t c = 0; c < cols; ++c)
        {
            M[r][c] *= lambda;
        }
    return M;
}
double** plusMatrix(double** A, double** B, size_t rows, size_t cols)
{
    for (size_t r = 0; r < rows; ++r)
        for (size_t c = 0; c < cols; ++c)
        {
            A[r][c] += B[r][c];
        }
    return A;
}
double** minusMatrix(double** A, double** B, size_t rows, size_t cols)
{
    for (size_t r = 0; r < rows; ++r)
        for (size_t c = 0; c < cols; ++c)
        {
            A[r][c] -= B[r][c];
        }
    return A;
}
double** multMatrix(double** A, double** B, double** C, size_t rowsA, size_t colsA)
{
    for (size_t r = 0; r < rowsA; ++r)
        for (size_t c = 0; c < colsA; ++c)
        {
            C[r][c] = 0;
            for (size_t k = 0; k < colsA; ++k)
                C[r][c] += (A[r][k] * B[k][c]);
        }
    return C;
}
double& maximumMatrix(double** matrix, size_t rows, size_t cols)
{
    double maximum = **matrix;
    size_t r_max = 0;
    size_t c_max = 0;
    for (size_t r = 0; r < rows; ++r)
        for (size_t c = 0; c < cols; ++c)
            if (matrix[r][c] > maximum)
            {
                maximum = matrix[r][c];
                r_max = r;
                c_max = c;
            }
    return matrix[r_max][c_max];
}
double& minmaxMatrix(double** matrix, size_t rows, size_t cols)
{
    size_t r_min = 0;
    size_t c_min = 0;
    size_t r_max = 0;
    size_t c_max = 0;
    double minimum;
    double maximum;
    for (size_t r = 0; r < rows; ++r) {
        minimum = matrix[r][0];
        r_min = r;
        c_min = 0;
        for (size_t c = 1; c < cols; ++c)
            if (matrix[r][c] < minimum) {
                minimum = matrix[r][c];
                r_min = r;
                c_min = c;
            }
        if (r == 0 || minimum > maximum) {
            maximum = minimum;
            r_max = r_min;
            c_max = c_min;
        }
    }
    return matrix[r_max][c_max];
}
template <typename Type>
void Swap(Type& a, Type& b)
{
    Type tmp = a;
    a = b;
    b = tmp;
}
void mixMatrix(double** matrix, size_t rows, size_t cols, size_t k1, size_t k2)
{
    if (k1 == k2)
        return;
    if (k1 >= rows || k1 >= cols || k2 >= rows || k2 >= cols)
        return;
    Swap(matrix[k1], matrix[k2]);
    for (size_t r = 0; r < rows; ++r)
        Swap(matrix[r][k1], matrix[r][k2]);
}