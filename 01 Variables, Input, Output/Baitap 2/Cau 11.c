#include <stdio.h>

int main()
{
    char c;
    scanf("%s", &c);

    printf("Ma ASCII cua '%s' la %d.", &c, (int)c);
    return 0;
}