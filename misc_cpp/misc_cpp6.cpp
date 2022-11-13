#include <iostream>

bool Function(double x, double y)
{
    double x2 = x * x, y2 = y * y, xy2 = x2 + y2 - 1;
    return (xy2 * xy2 * xy2 - x2 * y2 * y <= 0);

}


int main()
{
    for (int y = 20; y >= 0; --y)
    {
        for (int x = 0; x < 41; ++x)
        {
            if (Function(-1.5 + 3 / 40. * x, -1.5 + 3 / 20. * y))
                std::cout << "*";
            else
                std::cout << ".";
        }
        std::cout << std::endl;
    }
    return 0;
}
