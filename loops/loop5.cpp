#include <iostream>
#include <cmath>

int main() {
    double eps, dx, x1, x2;

    std::cin >> eps >> dx >> x1 >> x2;
    
    while (x1 <= x2)
    {
        double S = 0;
        double curr = x1;
        int a = 1;
        while ( std::abs(curr)>eps)
        {
            S = curr;
            a = 2;
            curr = -curr * x1 * x1 / (a * (a - 1));
        }
        std::cout <<"x = " << xmin<<"| sum f(x) = " << sum << "| sin = " << sin(x1) << '\n';
        x1 += dx;
    }
    return 0;
}
