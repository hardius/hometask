#include <iostream>

void shiftArray(int A[], int n, int k)
{
    int first = A[0], temp;
    for (int i = 0; i < k; ++i)
    {
        for (int j = 0; j < n - 1; ++j)
        {
            temp = A[j];
            A[j] = A[j + 1];
            A[j + 1] = temp;
        }
        Print(A, 10);
        A[n - 1] = first;
        first = A[0];
    }
}
int main()
{
    int A[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    shiftArray(A, 10, 3);
}
