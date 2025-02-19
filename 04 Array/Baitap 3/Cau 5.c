#include <stdio.h>

void writeArray(int *a, int n)
{
    if (n == 0)
    {
        return;
    }
    writeArray(a, n - 1);
    printf("%d\n", a[n - 1]);
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[100];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    writeArray(a, n);

    return 0;
}