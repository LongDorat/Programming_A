#include <stdio.h>

void copyOddNumbers(int a[], int n, int b[], int *m)
{
    *m = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            b[*m] = a[i];
            (*m)++;
        }
    }
}

void printList(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int a[] = {1, 5, 6, 8, 71, 0, 12, 13, 11, 18};
    int b[1000];
    int m, n;

    n = sizeof(a) / sizeof(int);
    printList(a, n);
    copyOddNumbers(a, n, b, &m);
    printList(b, m);

    return 0;
}