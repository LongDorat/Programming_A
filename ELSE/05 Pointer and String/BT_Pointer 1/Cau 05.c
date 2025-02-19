#include <stdio.h>

void Insert(int x, int p, int a[], int *n)
{
    for (int i = *n; i > p; i--)
        a[i] = a[i - 1];
    a[p] = x;
    (*n)++;
}

int main()
{
    int a[] = {1, 5, 2, 0};
    int n = sizeof(a) / sizeof(int);
    int x, i, p;
    x = 100;
    p = 4;
    Insert(x, p, a, &n);
    for (i = 0; i <= n - 1; i++)
        printf("%d ", a[i]);
    return 0;
}