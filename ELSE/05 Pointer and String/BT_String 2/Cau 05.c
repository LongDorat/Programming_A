#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void mystrcpy(char *s, char *c)
{
    int len = strlen(s);
    for (int i = 0; i < len; i++)
        c[i] = s[i];
    c[len] = '\0';
}

int main()
{
    char *p = "Hello World";
    char *c = (char *)malloc(100);
    mystrcpy(p, c);
    printf("%s", c);
    free(c);
}