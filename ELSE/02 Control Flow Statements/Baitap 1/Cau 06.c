#include <stdio.h>

int main()
{
    int num;
    int MIN;
    scanf("%d", &MIN);
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &num);
        if (num < MIN)
        {
            MIN = num;
        }
    }

    printf("%d", MIN);

    return 0;
}