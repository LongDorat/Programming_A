#include "Include.h"

int main()
{
    int n;
    scanf("%d", &n);
    
    int a[1000];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        printf("%d ", a[i]);
        sum += a[i] * a[i];
    }
    printf("\n%d\n", sum);
    return 0;
}