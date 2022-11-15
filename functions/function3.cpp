#include <iostream>
#include <fstream>
#include <stdexcept>

double det(double** M, size_t size) {
    if (size == 1)
        return M[0][0];

    double det_val = 0., sign = 1.;
    for (size_t i = 0; i < size; ++i, sign *= -1.)
    {
        if (M[0][i] == 0)
            continue;
        double** M_ = new double* [size - 1];
        for (size_t r = 1; r < size; ++r)
        {
            M_[r - 1] = new double[size - 1];
            for (size_t c = 0, c_current = 0; c < size; c++, c_current++)
            {
                if (i == c) {
                    c_current--;
                    continue;
                }
                M_[r - 1][c_current] = M[r][c];
            }
        }
        det_val += sign * M[0][i] * det(M_, size - 1);
    }
    return det_val;
}