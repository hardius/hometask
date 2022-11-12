#include <iostream>
#include <ctime>


int number_length(int n)
{
    int digit_count = 0;
    while (n >= 1)
    {
        n = n / 10;
        ++digit_count;
    }
    return digit_count;
}

void printSpace(int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << " ";
    }
}

int main()
{
    srand(time(NULL));

    int n, m;
    std::cin >> n >> m;

    int** dynarr = new int* [n];
    for (int i = 0; i < n; ++i)
    {
        dynarr[i] = new int[m];
    }

    for (int i = 0; i < n; ++i)
    {
        for (int k = 0; k < m; ++k)
        {
            dynarr[i][k] = rand() % 100000;
        }
    }

    int* maxlength = new int[m];
    maxlength[0] = 0;

    for (int i = 0; i < m; ++i)
    {
        for (int k = 0; k < n; ++k)
        {
            int value = number_length(dynarr[k][i]);
            if (maxlength[i] < value)
            {
                maxlength[i] = value;
            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int k = 0; k < m; ++k)
        {
            std::cout << dynarr[i][k];
            printSpace(maxlength[i] - number_length(dynarr[i][k]));
            std::cout << " ";
        }
        std::cout << std::endl;
    }
}