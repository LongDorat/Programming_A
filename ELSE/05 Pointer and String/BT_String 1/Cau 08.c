#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char *s[40];
    for (int i = 0; i < 40; i++)
    {
        s[i] = (char *)malloc(40 * sizeof(char));
    }
    for (int i = 0; i < n; i++)
    {
        gets(s[i], stdin);
        if (s[i][strlen(s[i]) - 1] == '\n')
        {
            s[i][strlen(s[i]) - 1] = '\0';
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d. %s\n", i + 1, s[i]);
    }

    for (int i = 0; i < 40; i++)
    {
        free(s[i]);
    }

    free(s);
    return 0;
}