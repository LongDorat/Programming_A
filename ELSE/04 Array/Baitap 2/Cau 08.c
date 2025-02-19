#include "Include.h"

int main()
{
    int n;
    scanf("%d",&n);
    long long triangleOfPascal[50][50];
    
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k <= i; k++)
        {
            if (k == 0 || k == i)
            {
                triangleOfPascal[i][k] = 1;
            }
            else
            {
                triangleOfPascal[i][k] = triangleOfPascal[i - 1][k - 1] + triangleOfPascal[i - 1][k];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k <= i; k++)
        {
            printf("%lld ", triangleOfPascal[i][k]);
        }
        printf("\n");
    }

    return 0;
}