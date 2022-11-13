#include <iostream>

int main() 
{
    double x, eps;
    std::cin >> x >> eps;

    double s = 1, pow = x;
    while (pow > eps)
    {
        s += pow;
        pow *= x;
    }

    std::cout << "Series value: " << s << std::endl;
    std::cout << "Function value: " << 1/(1-x) << std::endl;
    return 0;
}
