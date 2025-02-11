#include <stdio.h>

int sumArray(int a[], int n)
{
    if (n < 0)
    {
        return 0;
    }
    return a[n - 1] + sumArray(a, n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("%d\n", sumArray(a, n));

    return 0;
}