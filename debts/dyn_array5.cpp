#include <iostream>

void Fill(int** a, int n, int m)
{
    int nm = n * m;
    int fill = 1, n2 = n, rd0 = 0, dd0 = 0, ud0 = n - 1, ld0 = m - 1;
    for (; ; )
    {
        for (int rd = rd0; rd <= ld0; ++rd)
        {
            a[dd0][rd] = fill;
            if (fill == nm) return;
            ++fill;
        }
        ++dd0;
        for (int dd = dd0; dd <= ud0; ++dd)
        {
            a[dd][ld0] = fill;
            if (fill == nm) return;
            ++fill;
        }
        --ld0;
        for (int ld = ld0; ld >= rd0; --ld)
        {
            a[ud0][ld] = fill;
            if (fill == nm) return;
            ++fill;
        }
        --ud0;
        for (int ud = ud0; ud >= dd0; --ud)
        {
            a[ud][rd0] = fill;
            if (fill == nm) return;
            ++fill;
        }
        ++rd0;
    }
}
int main()
{
    int n, m;
    std::cin >> n >> m;

    int** a = new int* [n];
    for (int i = 0; i < n; ++i)
    {
        a[i] = new int[m];
    }

    Fill(a, n, m);


    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            std::cout << a[i][j] << '\t';
        }
        std::cout << std::endl;
    }
    
    for (int i = 0; i < n; ++i)
    {
        delete[] a[i];
    }
    delete[]a;
}
