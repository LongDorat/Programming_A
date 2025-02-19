#include <stdio.h>

int main()
{
    void *p;
    int a = 5, b = 2;

    p = &a;
    b = *((int *)p);

    return 0;
}