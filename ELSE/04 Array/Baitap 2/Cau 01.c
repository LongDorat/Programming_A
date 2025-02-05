#include "Include.h"

#define getFibonacci getFibo
void getFibonacci(int *A, int n)
{
    A[0] = A[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        A[i] = A[i - 1] + A[i - 2];
    }
}

int main()
{
    int A[50];
    int i, n;
    n = 10;
    getFibo(A, n);
    for (i = 0; i <= n; i++)
        printf("%d ", A[i]);
    return 0;
}