#include "Include.h"

int main()
{
    int n;
    scanf("%d", &n);

    int a[1000];
    int max = 0;
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        printf("%d ", a[i]);
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    printf("\n%d %d\n", max, min);
    return 0;
}