#include "Include.h"

int main()
{
    int a = 0, b = 0, c = 0, temp;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &temp);
        if (temp > c)
        {
            a = b;
            b = c;
            c = temp;
        }
        else if (temp > b)
        {
            a = b;
            b = temp;
        }
        else
        {
            a = temp;
        }
    }

    printf("%d %d %d", a, b, c);

    return 0;
}