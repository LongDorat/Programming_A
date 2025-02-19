#include <stdio.h>
#include <string.h>

int Compare(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    while (s1[i] != '\0' && s2[j] != '\0')
    {
        if (s1[i] - s2[j] == 0 || s1[i] - s2[j] == 32 || s1[i] - s2[j] == -32)
        {
            i++;
            j++;
            continue;
        }
        else if (s1[i] - s2[j] < 0)
        {
            return -1;
        }
        else
        {
            return 1;
        }
        i++;
        j++;
    }

    return 0;
}

int main()
{
    char s1[500], s2[500];
    int len;
    fgets(s1, 500, stdin);
    // Remove '\n' in fgets
    len = strlen(s1);
    if (s1[len - 1] == '\n')
    {
        len--;
        s1[len] = '\0';
    }

    fgets(s2, 500, stdin);
    // Remove '\n' in fgets
    len = strlen(s2);
    if (s2[len - 1] == '\n')
    {
        len--;
        s2[len] = '\0';
    }

    if (Compare(s1, s2) < 0)
        printf("1 < 2");
    else if (Compare(s1, s2) > 0)
        printf("1 > 2");
    else
        printf("1 = 2");
}