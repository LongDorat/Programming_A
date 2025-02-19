#include <stdio.h>

int main()
{
    int a = 10;

    int* p = &a;
    (*p) = 5;

    int* q = &a;

    return 0;
}