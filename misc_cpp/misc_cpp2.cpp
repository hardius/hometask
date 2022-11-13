

#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;
    
    double D = b * b - 4 * a * c, a2 = a + a, x1, x2;
    if (D > 0 && a != 0)
    {
        x1 = (-b - sqrt(D)) / a2;
        x2 = (-b + sqrt(D)) / a2;
        std::cout << "Answer: x1 =  " << x1 << ", x2 = " << x2 << '\n';
    }
    if (a == 0)
    {
        x1 = -c / b;
        std::cout << "Answer: x =  " << x1 << '\n';
    }
    if (a != 0 && D == 0)
    {
        x1 = -b / a2;
        std::cout << "Answer: x =  " << x1 << '\n';
    }
    if (a != 0 && D < 0)
    {
        std::cout << "No decisions.\n";
    }
    std::cout << "\n";
    return 0;
}
