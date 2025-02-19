#include <stdio.h>

int main()
{
    int height;
    scanf("%d", &height);

    printf("##########\n");
    for(int i = 1; i < height - 1; i++)
    {
        printf("#        #\n");
    }
    printf("##########\n");

    return 0;
}