#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char* subString(char* s, int p, int n)
{
    int len = strlen(s);
    char *sub = (char *)malloc(n + 1);
    for (int i = 0; i < n; i++)
        sub[i] = s[p + i];
    sub[n] = '\0';
    return sub;
}

int main()
{
    char *st = "toi di hoc";
    char *res = subString(st, 4, 2);
    puts(st);
    puts(res);
    free(res);

    return 0;
}