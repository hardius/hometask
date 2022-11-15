#include <iostream>

void snakeArray(int** A, int n)
{
    int fill = 1, nn=n*n;
    for (int i = 0; ;)
    {
        for (int j = 0; j < n; ++j)
        {
            A[j][i] = fill;
            if (fill == nn) return;
            ++fill;
        }
        ++i;
        for (int j = n - 1; j >= 0; --j)
        {
            A[j][i] = fill;
            if (fill == nn) return;
            ++fill;
        }
        ++i;
    }
}
int main()
{
    int n;
    std::cin >> n;

    int** a = new int* [n];
    for (int i = 0; i < n; ++i)
    {
        a[i] = new int[n];
    }

    snakeArray(a, n);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cout << a[i][j] << '\t';
        }
        std::cout << std::endl;
    }
    
    for (int i = 0; i < n; ++i)
    {
        delete[] a[i];
    }
    delete[]a;
}
