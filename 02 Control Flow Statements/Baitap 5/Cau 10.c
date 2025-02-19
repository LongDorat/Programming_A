#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (float)i / (i + 1);
    }

    printf("%.2f", sum);

    return 0;
}