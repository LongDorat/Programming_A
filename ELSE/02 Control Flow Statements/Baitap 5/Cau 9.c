#include "Include.h"

int main()
{
    int rows;
    scanf("%d", &rows);

    int numbers = 1;
    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d ", numbers++);
        }
        printf("\n");
    }

    return 0;
}