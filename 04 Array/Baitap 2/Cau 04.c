#include "Include.h"

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int a[50][50];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    int num;
    int count = 0;
    scanf("%d", &num);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == num)
            {
                printf("(%d, %d) ", i, j);
                count++;
            }
        }
    }
    printf("\n%d", count);
    return 0;
}