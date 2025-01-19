#include "Include.h"

int main()
{
    long num;
    scanf("%d", &num);

    long reversed = 0;
    while (num > 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    printf("%ld", reversed);

    return 0;
}