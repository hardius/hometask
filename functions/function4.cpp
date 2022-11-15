#include <iostream>
#include <fstream>
#include <stdexcept>

double** transpose(double** matrix, size_t rows, size_t cols)
{
    double** transposed = createMatrix(cols, rows);
    for (size_t r = 0; r < rows; ++r)
        for (size_t c = 0; c < cols; ++c)
            transposed[c][r] = matrix[r][c];
    return transposed;
}

double** inv(double** M, size_t size) 
{
    double** inverse = new double* [size];
    double det_A = det(M, size);
    if (det_A == 0)
        return new double* [0];

    for (size_t r = 0; r < size; ++r)
    {
        inverse[r] = new double[r];
        for (size_t c = 0; c < size; ++c)
        {
            double** A_ij = new double* [size];
            for (size_t k = 0; k < size; ++k)
            {
                A_ij[k] = new double[size];
                for (size_t p = 0; p < size; ++p)
                {
                    if (k == r && p == c)
                        A_ij[k][p] = 1.;
                    else if (k == r || p == c)
                        A_ij[k][p] = 0.;
                    else
                        A_ij[k][p] = M[k][p];
                }
            }
            inverse[r][c] = det(A_ij, size) / det_A;
        }
    }
    return transpose(inverse, size, size);
}