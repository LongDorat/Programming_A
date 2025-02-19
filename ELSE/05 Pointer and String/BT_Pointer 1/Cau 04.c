#include <stdio.h>
#include <stdlib.h>

int *getSequence(int n, int d)
{
    int *sequence = (int *)malloc(n * sizeof(int));

    sequence[0] = 1;
    for (int i = 1; i < n; i++)
    {
        sequence[i] = sequence[i - 1] + d;
    }

    return sequence;
}

int main()
{
    int *a;
    int n = 5, d = 2;
    int i;
    a = getSequence(n, d);
    for (i = 0; i <= n - 1; i++)
        printf("%d ", a[i]);
    free(a);
}