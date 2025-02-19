#include "Include.h"

int main()
{
    int n;
    scanf("%d", &n);
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x, y;
    scanf("%d %d", &x, &y);
    int b[1000];
    memcpy(b, a, sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        if (b[i] == x)
        {
            b[i] = y;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}