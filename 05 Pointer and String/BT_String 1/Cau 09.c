#include <stdio.h>
#include <string.h>

int main()
{
    char s[500];
    fgets(s, 500, stdin);
    printf("%s", s);

    int countWord = 1;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ' & s[i+1] != ' ')
        {
            countWord++;
        }
    }
    printf("%d", countWord);

    return 0;
}