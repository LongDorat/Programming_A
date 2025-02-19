#include "Include.h"

int isSeries(int k, int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] != pow(k, i))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int A[] = {1, 2, 4, 8, 16, 32, 64, 128};
    int i;
    int n = sizeof(A) / sizeof(int);
    for (i = 0; i <= n - 1; i++)
        printf("%d ", A[i]);
    printf("\n");

    if (isSeries(2, A, n))
        printf("YES");
    else
        printf("NO");

    return 0;
}