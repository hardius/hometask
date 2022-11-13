#include <iostream>

int main()
{
    int N=1;

    double S = 1, a = -3;

    for (; fabs(4*S-3.14)>0.001; ++N)
    {
        S = S + 1. / a;
        if (a > 0)
            a = -(a + 2);
        else
            a = -a + 2;
    }
    std::cout << 4 * S << '\t' << N << std::endl;
    return 0;
}

