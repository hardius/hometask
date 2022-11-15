#include <iostream>


int main()
{
    int num;
    std::cin >> num;

    int i = 1;
    for (; i <= num; ++i)
    {
        for (int j = 0; j < num - i; j++) std::cout << ' ';
        for (int k = 0; k < i + i - 1; k++) std::cout << '*';
        std::cout << std::endl;
    }

    i -= 2;

    for (; i >= 0; --i)
    {
        for (int j = 0; j < num - i; j++) std::cout << ' ';
        for (int k = 0; k < i + i - 1; k++) std::cout << '*';
        std::cout << std::endl;
    }
    return 0;
}
