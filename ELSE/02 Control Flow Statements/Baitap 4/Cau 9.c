#include "Include.h"

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("%d x %2d = %2d\t", j, i, j * i);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 4; j <= 6; j++)
        {
            printf("%d x %2d = %2d\t", j, i, j * i);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 7; j <= 9; j++)
        {
            printf("%d x %2d = %2d\t", j, i, j * i);
        }
        printf("\n");
    }

    return 0;
}