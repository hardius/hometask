#include <iostream>
#include <cmath>

int main()
{
    int N;

    std::cin >> N;

    double S = 1, a=-3;

    for (int i = 0; i < N; ++i)
    {
        S = S + 1. / a;
        a = -(a + 2);
    }
    std::cout << 4*S << std::endl;
    return 0;
}
