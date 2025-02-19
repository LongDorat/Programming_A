#include "Include.h"

int main()
{
    int n;
    scanf("%d", &n);

    int a[1000];
    int numberOfOdds = 0;
    int Odds[1000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        printf("%d ", a[i]);
        if (a[i] % 2 != 0)
        {
            Odds[numberOfOdds] = a[i];
            numberOfOdds++;
        }
    }
    printf("\n");

    printf("%d\n", numberOfOdds);

    for (int i = 0; i < numberOfOdds; i++)
    {
        printf("%d ", Odds[i]);
    }
    printf("\n");

    return 0;
}