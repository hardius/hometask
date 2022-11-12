#include <iostream>

using std::cout;
using std::cin;

int cycle(int n)
{
    int digits[30];

    digits[0] = 10 / n;
    int modulo = 10 % n;


    for (int i = 1; i < 30; ++i)
    {
        digits[i] = modulo * 10 / n;
        if (digits[0] == digits[1])
        {
            if (digits[0] != 0)
            {
                return 1;
            }
            else
            {

                for (int k = 2; k < 30; ++k)
                {
                    modulo = modulo * 10 % n;
                    digits[k] = modulo * 10 / n;
                    if (digits[k] != 0)
                    {
                        for (int p = k + 1; p < 30; ++p)
                        {
                            modulo = modulo * 10 % n;
                            digits[p] = modulo * 10 / n;
                            if (digits[p] == 0)
                            {
                                return p;
                            }
                        }
                    }
                }
            }
        }
        else if (digits[0] == digits[i])
        {
            modulo = modulo * 10 % n;
            digits[i + 1] = modulo * 10 / n;
            if (digits[1] == digits[i + 1])
            {
                return i;
            }
            else
            {
                return -1;
            }
        }
        modulo = modulo * 10 % n;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    cout << "cycle(" << n << ")=" << cycle(n) << endl;
}


