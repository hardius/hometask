#include <iostream>

int main()
{
    int n = 0;
    std::cin >> n;
    for (int i = 0; i < n + 1; ++i)
    {
        for (int k = 0; k<i; ++k)
        {
            std::cout << '*';
        }
        std::cout << '\n';
    }
    return 0;
}

