#include "Include.h"

int main()
{
    int num;
    long long fac = 1;
    scanf("%d", &num);

    for(int i = 2; i <= num; i++)
    {
        fac = fac * i;
    }

    printf("%lld", fac);

    return 0;
}