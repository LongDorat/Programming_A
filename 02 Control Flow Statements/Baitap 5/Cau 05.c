#include <stdio.h>

int main()
{
    long num;
    scanf("%ld", &num);

    while(num != 0)
    {
        printf("%ld", num % 10);
        num /= 10;
    }

    return 0;
}