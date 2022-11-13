#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int n2 = n + n, a = 2;
    double S = 1+1./a;

    for (int i = 1; i < n; ++i)
    {
        a = a + 2;
        S = S + 1. / a;
    }

    std::cout << "S = " << S << '\n';
}
