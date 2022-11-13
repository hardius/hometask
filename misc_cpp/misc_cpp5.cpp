#include <iostream>

int main()
{
    double a, b, c, d, x;
    std::cin >> a >> b >> c >> d >> x;

    std::cout << "y = " << c + (x - a) * (d - c) << std::endl;
    return 0;
}
