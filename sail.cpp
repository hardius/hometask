#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

bool figure 1(double x, double y) {
    return (x >= 0 && y >= 0 && y <= -2 * (x - 1));
}

bool figure2(double x, double y) {
    return (x <= 0 && y >= 0 && y <= 2 * (x + 1));
}

bool figure3(double x, double y) {
    return (x <= 0 && y <= 0 && y >= -sqrt(1 - (x + 1) * (x + 1));
}

bool figure4(double x, double y) {
    return (x >= 0 && y <= 0 && y >= -sqrt(1 - (x - 1) * (x - 1));
}

int main() 
{
    double x, y;

    cin >> x;
    cin >> y;

    if (figure1(x, y) || figure2(x, y) || figure3(x, y) || figure4(x, y))
    {
        cout << "Inside sail\n";
    }
    else
    {
        cout << "Out of sail\n";
    }
}
