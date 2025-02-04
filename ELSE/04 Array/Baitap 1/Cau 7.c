#include "Include.h"

void makeReverse(int *A, int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = A[i];
        A[i] = A[n - i - 1];
        A[n - i - 1] = temp;
    }
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int i;
    int n = sizeof(A) / sizeof(int);
    for (i = 0; i <= n - 1; i++)
        printf("%d ", A[i]);
    printf("\n");
    makeReverse(A, n);
    for (i = 0; i <= n - 1; i++)
        printf("%d ", A[i]);
}