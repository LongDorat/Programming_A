#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool palindrome(char* s)
{
    int n = strlen(s);
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char s[500];
    scanf("%s", s);
    printf("%s\n", s);
    if (palindrome(s))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}