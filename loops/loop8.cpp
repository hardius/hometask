#include <iostream>

int sum(int n)
{
    int s = 0;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int mult(int n)
{
    int s = 1;
    while (n > 0)
    {
        s *= n % 10;
        n /= 10;
    }
    return s;
}

int main()
{
    int n;
    std::cin >> n;
    
    std::cout << sum(n) << std::endl;
    std::cout << mult(n) << std::endl;
}
