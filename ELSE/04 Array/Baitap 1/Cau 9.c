#include "Include.h"

int locate(int x, int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] == x)
            return i + 1;
    }
    return -1;
}

int main()
{
    int A[] = {1, 2, 3, 4, 3};
    int i;
    int n = sizeof(A) / sizeof(int);
    for (i = 0; i <= n - 1; i++)
        printf("%d ", A[i]);

    printf("\n%d", locate(3, A, n));
}