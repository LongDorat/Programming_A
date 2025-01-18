#include "Include.h"

int main()
{
    char inputChar;
    scanf("%c", &inputChar);

    if ((inputChar >= 'A' && inputChar <= 'Z') || (inputChar >= 'a' && inputChar <= 'z'))
    {
        printf("%c is an alphabet.", inputChar);
    }
    else
    {
        printf("%c is not an alphabet.", inputChar);
    }

    return 0;
}