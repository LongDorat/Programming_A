#include <string.h>

void Delete(int p, char* s)
{
    int n = strlen(s);
    for (int i = p; i < n; i++)
        s[i] = s[i + 1];
}