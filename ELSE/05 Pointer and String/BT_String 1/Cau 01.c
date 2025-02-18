#include <stdio.h>
#include <string.h>

void reverse(char* s)
{
    int n = strlen(s);
    for (int i = 0; i < n / 2; i++)
    {
        char temp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = temp;
    }
}