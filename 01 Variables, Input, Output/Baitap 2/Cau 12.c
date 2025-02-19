#include <stdio.h>

int main()
{
    int c;
    scanf("%d", &c);

    printf("Ky tu co ma ASCII %d la: '%c'.", c, (char)c);
    return 0;
}