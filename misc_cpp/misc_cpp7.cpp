#include <iostream>
#include <cmath>

int main()
{
    double R = 1e6;
    long long N = 0;

    for (int x = -R; x <= R; ++x)
    {
        for (int y = -R; y <= R; ++y)
            if (x * x + y * y <= R * R)
            {
                ++N;
            }
    }

    std::cout << N;
    return 0;
}
