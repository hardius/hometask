#include <iostream>


int main()
{
    setlocale(LC_ALL, "ru");

    int N;
    std::cin >> N;

    int NumOfFloor = 0, a = N, NLeft;

    bool toBreak = false;
    for (int i = 1; ;)
    {
        for (int i1 = 0; ; ++i1)
        {
            if (a <= 0)
            {
                NLeft = i + a;
                toBreak = true;
                break;
            }
            else if (i1 >= i)
            {
                break;
            }
            else
            {
                a -= i;
                ++NumOfFloor;
            }
        }
        if (toBreak)
        {
            toBreak = false;
            break;
        }
        else
        {
            ++i;
        }
    }

    std::cout << "Номер комнаты: " << N << std::endl;
    std::cout << "Этаж: " << NumOfFloor << std::endl;
    std::cout << "Номер комнаты слева: " << NLeft << std::endl;


}
