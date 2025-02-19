#include <string.h>
#include <stdio.h>

int countVowels(char *s)
{
    int n = strlen(s);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char str[500];
    fgets(str, 500, stdin);
    printf("%s%d", str, countVowels(str));
    return 0;
}