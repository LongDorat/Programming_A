#include <stdio.h>

int main()
{
    long num;
    scanf("%ld", &num);

    int digits = 0;
    while (num > 0)
    {
        num /= 10;
        digits++;
    }

    printf("%d", digits);

    return 0;
}