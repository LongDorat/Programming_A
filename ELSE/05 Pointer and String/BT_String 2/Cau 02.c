#include <stdio.h>
#include <string.h>

void properSpace(char* s)
{
    int n = strlen(s);

    while (s[0] == ' ')
    {
        for (int i = 0; i < n; i++)
            s[i] = s[i + 1];
        n--;
    }


    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ' && s[i + 1] == ' ')
        {
            for (int j = i; j < n; j++)
                s[j] = s[j + 1];
            i--;
        }
    }
}

int main()
{
    char s[500];
    fgets(s, 500, stdin);
    if (s[strlen(s) - 1] == '\n')
        s[strlen(s) - 1] = '\0';

    printf("%s\n", s);
    properSpace(s);
    printf("%s\n", s);

    return 0;
}