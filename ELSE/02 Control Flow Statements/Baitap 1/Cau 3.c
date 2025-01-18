#include "Include.h"

int main()
{
    int num;
    scanf("%d", &num);

    num % 2 == 0 ? printf("%d is even", num) : printf("%d is odd", num);

    return 0;
}