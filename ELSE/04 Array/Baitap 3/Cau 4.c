#include <stdio.h>

void readArray(int *a, int n)
{
    if (n == 0)
    {
        return;
    }
    readArray(a, n - 1);
    scanf("%d", &a[n - 1]);
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[100];
    readArray(a, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}