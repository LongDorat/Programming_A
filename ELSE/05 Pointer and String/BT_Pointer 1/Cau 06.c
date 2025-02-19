#include <stdio.h>

void Delete(int p, int a[], int *n)
{
    for (int i = p; i < *n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    (*n)--;
}

int main()
{
    int a[] = {1, 5, 20, 0};
    int n = sizeof(a) / sizeof(int);
    int p, i;
    p = 2;
    for (i = 0; i <= n - 1; i++)
        printf("%d ", a[i]);
    Delete(p, a, &n);
    printf("\n");
    for (i = 0; i <= n - 1; i++)
        printf("%d ", a[i]);
}