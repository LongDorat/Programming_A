#include <stdio.h>
#include <string.h>

int main()
{
    char s[500];
    fgets(s, 500, stdin);
    printf("%s", s);

    int countblank = 1;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
        {
            countblank++;
        }
    }
    printf("%d", countblank);

    return 0;
}