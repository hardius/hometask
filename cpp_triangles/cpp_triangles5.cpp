#include <iostream>


int main()
{
    int num, quan;
    std::cin >> num >> quan;

    int i = 1;
    for (; i <= num; ++i)
    {
        for (int counter = 0; counter < quan; ++counter)
        {
            for (int j = 0; j < num - i; j++) std::cout << ' ';
            for (int k = 0; k < i + i - 1; k++) std::cout << '*';
            for (int j = 0; j < num - i; j++) std::cout << ' ';
        }
        std::cout << std::endl;

    }

    i -= 2;
    for (; i >= 0; --i)
    {
        for (int counter = 0; counter < quan; ++counter)
        {
            for (int j = 0; j < num - i; ++j) std::cout << ' ';
            for (int k = 0; k < i + i - 1; ++k) std::cout << '*';
            for (int j = 0; j < num - i; ++j) std::cout << ' ';
        }
        std::cout << std::endl;

    }
    return 0;
}
