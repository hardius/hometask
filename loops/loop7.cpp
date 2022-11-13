#include <iostream>

double smthrnd()
{
    return (double)rand() / RAND_MAX;
}

int main()
{
    int n;
    std::cin >> n;
    double insidepnts = 0.;

    for (int i = 0; i < n; i++)
    {
        double x = smthrnd(), y = smthrnd();
        insidepnts += (x * x + y * y) <= 1 ? 1 : 0.;
    }
    std::cout << insidepnts / n << std::endl;
}
