#include <iostream>


int main()
{
    int n, m;
    std::cin >> n >> m;
    int** dynarr = new int* [n];
    for (int i = 0; i < n; ++i)
    {
        dynarr[i] = new int[m];
    }

    int number = 1;
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
        {
            for (int k = 0; k < m; ++k)
            {
                dynarr[i][k] = number;
                ++number;
            }
        }
        else
        {
            for (int k = m - 1; k >= 0; --k)
            {
                dynarr[i][k] = number;
                ++number;
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int k = 0; k < m; ++k)
        {
            std::cout << dynarr[i][k] << " ";
        }
        std::cout << std::endl;
    }
}
