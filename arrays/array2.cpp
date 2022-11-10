#include <iostream>

int main()
{
    int N;
    int a = new int[N];

    for (int i = 0; i < N; ++i)
    {
        std::cin >> a[i];
    }

    int i = 0, j = N;

    while (i <= N / 2)
    {
        std::cout << a[i] << std::endl;
        std::cout << a[j] << std::endl;

        ++i;
        --j
    }
    return 0;
}