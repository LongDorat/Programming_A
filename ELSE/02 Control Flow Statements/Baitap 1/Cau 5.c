#include "Include.h"

int main()
{
    int num;
    int MAX = 0;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &num);
        if (num > MAX)
        {
            MAX = num;
        }
    }

    printf("%d", MAX);

    return 0;
}