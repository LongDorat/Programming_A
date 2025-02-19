#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("In xuoi: %d %d %d\n", a, b, c);
    printf("In nguoc: %d %d %d", c, b, a);

    return 0;
}