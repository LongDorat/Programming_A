#include <stdio.h>
#include <string.h>

int main()
{
    char s1[500];
    char s2[500];
    fgets(s1, 500, stdin);
    if (s1[strlen(s1) - 1] == '\n')
    {
        s1[strlen(s1) - 1] = '\0';
    }
    fgets(s2, 500, stdin);
    if (s2[strlen(s2) - 1] == '\n')
    {
        s2[strlen(s2) - 1] = '\0';
    }

    switch (strcmp(s1, s2))
    {
    case -1:
        printf("1 < 2");
        break;
    case 1:
        printf("1 > 2");
        break;
    default:
        printf("1 = 2");
        break;
    }
}