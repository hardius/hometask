#include <iostream>
#include <cmath>

int main()
{
    double R = 1e6;
    long long N = 0;

    for (int x = 0; x <= R; ++x)
    {
        for (int y = 0; y <= R; ++y)
            if (x * x + y * y <= R * R)
            {
                ++N;
            }
    }

    std::cout << 4*N;
    return 0;
}
