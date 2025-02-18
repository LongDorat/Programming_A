#include <string.h>
#include <stdio.h>

void Insert(char c, int p, char *s)
{
    int len = strlen(s);
    for (int i = len; i >= p; i--)
    {
        s[i + 1] = s[i];
    }
    s[p] = c;
}

int main()
{
    char str[500];
    fgets(str, 500, stdin);
    printf("%s", str);
    Insert(' ', 3, str);
    printf("%s", str);
}