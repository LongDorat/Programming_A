#include <stdio.h>

int main()
{
    int num;
    scanf("%d", num);

    for(int i = 1; i < num; i++)
    {
        printf("%d, ", i);
    }
    printf("%d$", num);

    return 0;
}