#include "Include.h"
#include "Function.h"
void Solution1()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", add(a, b));
}

void Solution2()
{
    int num;
    scanf("%d", &num);
    printf("%d", my_abs(num));
}

void Solution3()
{
    long num;
    scanf("%d", &num);
    printf("%d", isPrime(num));
}

void Solution4()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", max(a, b));
}

void Solution5()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", max3(a, b, c));
}

void Solution6()
{
    int year;
    scanf("%d", &year);
    printf("%d", isLeapYear(year));
}

void Solution7()
{
    int num;
    scanf("%d", &num);
    printf("%d", isArmstrong(num));
}

void Solution8()
{
    int num;
    scanf("%d", &num);
    printf("%d", isArmstrong(num));
}

void Solution9()
{
    int num, rank;
    scanf("%d %d", &num, &rank);
    printf("%d", power(num, rank));
}

void Solution10()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printPrimeNumbers(a, b);
}