#include "Include.h"

void printList(int A[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);
}

int main()
{
    int n;
    int a[] = {1, 4, 5, 7, 10, -1, 2};
    n = sizeof(a) / sizeof(int); // So phan tu
    printList(a, n);
    return 0;
}