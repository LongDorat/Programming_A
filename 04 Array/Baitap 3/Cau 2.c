#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[100];
    int countOfOdds = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 != 0)
        {
            countOfOdds++;
        }
    }

    printf("%d\n", countOfOdds);
    if(countOfOdds > 0)
    {
        for(int i = 0; i < n; i++)
        {
            if(a[i] % 2 != 0)
            {
                printf("%d ", a[i]);
            }
        }
    }
    else 
    {
        printf("NONE");
    }

    return 0;
}