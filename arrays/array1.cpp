#include <iostream>
#include <conio.h>

void convert10to16()
{
    int number;

    std::cout << "Введите число: ";
    std::cin >> number;

    char digits16[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };

    if (number < 16)
    {
        std::cout << digits16[number];
    }
    else
    {
        int n = 0, n1, val1 = number, val2 = val1 % 16;

        for (; val1 > 0; ++n)
        {
            val1 /= 10;
        }
        val1 = number;

        int* arr = new int[n];

        for (int i = 0; ; ++i)
        {
            arr[i] = val2;
            val1 /= 16;
            if (val1 < 16)
            {
                arr[i + 1] = val1;
                n1 = i + 1;
                break;
            }
            else
            {
                val2 = val1 % 16;
            }
        }

        for (int i = n1; i >= 0; --i)
        {
            std::cout << digits16[arr[i]];
        }
    }

}

int digit16to10(char number16)
{
    char digits16[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };

    for (int i = 0; i < 16; ++i)
    {
        if (digits16[i] == number16)
        {
            return i;
        }
    }
}
void convert16to10()
{
    std::string number16;

    std::cout << "Введите число: ";
    std::cin >> number16;

    if (number16.length() == 1)
    {
        std::cout << digit16to10(number16[0]) << std::endl;
    }
    else
    {
        int val1 = 1, number10 = 0;;
        for (int i = number16.length() - 1; i >= 0; --i)
        {
            number10 += digit16to10(number16[i]) * val1;
            val1 *= 16;
        }
        std::cout << number10 << std::endl;
    }
}

int main()
{
    setlocale(LC_ALL, "RU");

    std::cout << "Нажмите N, если хотите перевести число из 10чной СИ в 16ричную СИ.\n";
    std::cout << "Нажмите M, если хотите перевести число из 16ричной СИ в 10чную СИ.\n";

    switch (_getch())
    {
    case 'N': case 'n':
        convert10to16();
        break;
    case 'M': case 'm':
        convert16to10();
        break;
    default:
        break;
    }
}
