#include <iostream>

int main()
{
    int rows;
    std::cin >> rows;
    for(int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for(int space = 1; space <= rows-i; ++space)
            {
            std::cout << ' ';
            }
        while (k != i + i - 1)
            {
                std::cout << '*';
                ++k;
                
            } std::cout << std::endl;
        
    }
    return 0;
    
}

