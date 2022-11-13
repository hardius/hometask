#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    double S = 0;

    for (int i = 1; i <= n; ++i)
    {
        S = S + 1. / i;
    }
    std::cout << "S = " << S << '\n';
}
