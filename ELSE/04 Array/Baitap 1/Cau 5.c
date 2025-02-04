#include "Include.h"

int isSort(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (A[i] > A[i + 1])
            return 0;
    }
    return 1;
}

int main()
{
    int A[] = {-1, 1, 4, 5, 10, 15};
    int n = sizeof(A) / sizeof(int);
    if (isSort(A, n))
        printf("YES");
    else
        printf("NO");
    return 0;
}