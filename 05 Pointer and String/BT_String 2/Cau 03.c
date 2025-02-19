#include <stdio.h>
#include <string.h>

void printWords(char *s)
{
    int n = strlen(s);
    int i = 0;

    while (i < n)
    {
        if (s[i] != ' ' && s[i] != '\0')
        {
            while (s[i] != ' ' && s[i] != '\0')
            {
                printf("%c", s[i]);
                i++;
            }
            printf("\n");
        }
        i++;
    }
}

int main()
{
    char s[500];
    fgets(s, 500, stdin);
    if (s[strlen(s) - 1] == '\n')
        s[strlen(s) - 1] = '\0';

    printWords(s);

    return 0;
}