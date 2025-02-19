#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    int digits = 0;
    int temp = num;
    while (temp != 0)
    {
        temp = temp / 10;
        digits++;
    }

    printf("So %d co %d chu so", num, digits);

    return 0;
}