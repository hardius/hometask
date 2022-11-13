#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int counter = 0, top = 1;

    while (n != 1)
    {
        if (n > top)  top = n;
        
        (n%2 == 0) ? n /= 2 : n = (n * 3) + 1;
        
        ++counter;
    }
    std::cout << "top = " << top <<  ", steps = " << counter << '\n';
}
