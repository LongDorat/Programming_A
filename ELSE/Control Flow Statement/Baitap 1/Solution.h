#include "Include.h"

void Solution1()
{
    int d, h, m, s, secs;
    scanf("%d", &secs);

    d = secs / 86400;
    h = (secs % 86400) / 3600;
    m = ((secs % 86400) % 3600) / 60;
    s = ((secs % 86400) % 3600) % 60;

    d == 0 ? printf("%02d:%02d:%02d", h, m, s) : printf("%d days %02d:%02d:%02d", d, h, m, s);
}

void Solution2()
{
    float km;
    scanf("%f", &km);

    float pay;
    if (km <= 0.5)
    {
        pay = 11500;
    }
    else if (km <= 30)
    {
        pay = 11500 + (km - 0.5) * 14500;
    }
    else
    {
        pay = 11500 + 29.5 * 14500 + (km - 30) * 11600;
    }

    printf("%.02f km = %.02f VND", km, pay);
}

void Solution3()
{
    int num;
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is even", num);
    }
    else
    {
        printf("%d is odd", num);
    }
}

void Solution4()
{
    char ch;
    getchar();
    scanf("%c", &ch);

    switch (ch)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        printf("%c is a vowel", ch);
        break;
    default:
        printf("%c is a consonant", ch);
        break;
    }
}

void Solution5()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("%d", a);
    }
    else if (b > a && b > c)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", c);
    }
}

void Solution6()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a < b && a < c)
    {
        printf("%d", a);
    }
    else if (b < a && b < c)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", c);
    }
}

void Solution7()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int delta = b * b - 4 * a * c;
    if (delta > 0)
    {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
        printf("x1 = %.02f\nx2 = %.02f", x1, x2);
    }
    else if (delta == 0)
    {
        float x = -b / (2 * a);
        printf("x = %.02f", x);
    }
    else
    {
        printf("No real roots");
    }
}

void Solution8()
{
    int year;
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
}

void Solution9()
{
    int num;
    scanf("%d", &num);

    if (num < 0)
    {
        printf("You entered a negative number");
    }
    else if (num == 0)
    {
        printf("You entered zero");
    }
    else
    {
        printf("You entered a positive number");
    }
}

void Solution10()
{
    char ch;
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is an alphabet", ch);
    }
    else
    {
        printf("%c is not an alphabet", ch);
    }
}