#include <iostream>
#include <cmath>

int main()
{
    double R = 3;
    long long Nsqr = (R + 1) * (R + 1), N = 0;

    for (int x = 1; x <= R; ++x)
    {
        for (int y = R; ; --y)
        {
            if (x * x + y * y > R * R)
            {
                ++N;
            }
            else
            {
                break;
            }
        }
    }

    std::cout << 4 * (Nsqr - N) - 4 * R - 3;
    return 0;
}
