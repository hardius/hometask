#include <iostream>

const double PI = 3.14159265358979323846;

bool InsideTriangle(double x, double y, double x1, double y1, double x2, double y2, double x3, double y3)
{
    int a = (x - x1) * (y - y2) - (x - x2) * (y - y1);
    int b = (x - x2) * (y - y3) - (x - x3) * (y - y2);
    int c = (x - x3) * (y - y1) - (x - x1) * (y - y3);

    if ((a >= 0 && b >= 0 && c >= 0) || (a <= 0 && b <= 0 && c <= 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    double x, y;
    std::cin >> x >> y;

    if (y < 0)
    {
        y = -y;
    }

    if (y > 5 || x < -5 || x>5)
    {
        std::cout << "Out of star \n";
        return 0;
    }

    double sin18 = sin(PI / 10), sin72 = sin((PI + PI) / 5), cos72 = cos((PI + PI) / 5);

    double a = 5 * tan(PI / 5), b = a * sin18;

    double xA = -b, xB = a - b, xE = xB * cos72 - 5 * sin72;
    double yN = sin18 * (5 + b), yE = xB * sin72 + 5 * cos72;

    bool triangle1 = InsideTriangle(x, y, xA, 0, xB, 0, xB, 5);
    bool triangle2 = InsideTriangle(x, y, xA, 0, 5, 0, xB, yN);
    bool triangle3 = InsideTriangle(x, y, xA, 0, xE, yE, xB, yN);

    if (triangle1 || triangle2 || triangle3)
    {
        std::cout << "Inside star \n";
    }
    else
    {
        std::cout << "Out of star \n";
    }

    return 0;
}


