#include <stdio.h>

int main()
{
    int a = 10;
    // printf("%d", a);

    int *p = &a;
    (*p) = 5;
    // printf("%d", *p);

    return 0;
}