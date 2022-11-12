#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));

    int N;
    std::cin >> N;

    int* arr = new int[N];

    for (int i = 0; i < N; ++i)
    {
        arr[i] = rand() % (N + 1);
        for (int k = 0; k < i; ++k)
        {
            if (arr[k] == arr[i])
            {
                arr[i] = rand() % (N + 1);
                k = -1;
            }
        }
    }

    for (int i = 0; i < N; ++i) cout << arr[i] << endl;

    int value = 0;
    for (int i = 0; i < N; ++i)
    {
        if (arr[i] == value)
        {
            ++value;
            i = -1;
        }
        if (i == N - 1 && arr[i] != value)
        {
            return value;
        }
    }
}
