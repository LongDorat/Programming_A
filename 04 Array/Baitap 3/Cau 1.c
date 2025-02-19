#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[100];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("%d\n", sum);
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}