#include "Include.h"

int main()
{
    int num;
    scanf("%d", &num);

    printf("%d Times Table\n", num);
    printf("====================\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}