#include <stdio.h>

int main()
{
    int F;
    scanf("%d", &F);

    printf("%d do F = %.02f do C", F, (float)(F - 32) * 5 / 9);
    return 0;
}