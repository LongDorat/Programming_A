#include <stdio.h>
int main()
{
    int i, n, A[100];
    scanf("%d", &n);
    int *p = A;

    for (int i = 0; i < n; i++)
        scanf("%d", p + i);

    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    return 0;
}