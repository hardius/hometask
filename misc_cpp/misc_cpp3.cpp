#include <iostream>
#include <cmath>

int main() {
    double R, r;
    std::cin >> R >> r;

    double x, y;
    std::cin >> x >> y;

    double nr = x * x + y * y;
    if (nr > r*r and nr < R*R)
    {
    std::cout << "Inside ring\n";
    } 
    else 
    {
        std::cout << "Out of ring.\n";
    }
    return 0;
    
}
