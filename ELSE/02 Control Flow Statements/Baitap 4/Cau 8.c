#include "Include.h"

int main()
{
    for (int i = 1; i < 10; i++)
    {
        printf("%d Times Table\n", i);
        printf("====================\n");
        for (int j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}