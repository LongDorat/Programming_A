#include "Include.h"

void readList(int *A, int n)
{
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);
}

void printList(int *A, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main()
{
    int n;
    int a[1000];
    scanf("%d", &n); // So phan tu
    readList(a, n);  // Nhap mang
    printf("Print list: ");
    printList(a, n);
    printf("Print again: ");
    printList(a, n);
    return 0;
}