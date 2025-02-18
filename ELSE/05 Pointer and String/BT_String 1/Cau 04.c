#include <stdio.h>
#include <string.h>

void proper(char* s)
{
    int n = strlen(s);
    if (s[0] >= 'a' && s[0] <= 'z')
    {
        s[0] -= 32;
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z' && s[i - 1] != ' ')
        {
            s[i] += 32;
        }
        else if (s[i] >= 'a' && s[i] <= 'z' && s[i - 1] == ' ')
        {
            s[i] -= 32;
        }
    }
}

int main()
{
    char s[500];
    fgets(s, 500, stdin);
    if (s[strlen(s) - 1] == '\n')
    {
        s[strlen(s) - 1] = '\0';
    }

    printf("%s\n", s);
    proper(s);
    printf("%s", s);

    return 0;
}