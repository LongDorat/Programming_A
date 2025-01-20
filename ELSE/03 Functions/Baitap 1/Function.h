#include "Include.h"

// Cau 1
int sum(int a, int b)
{
    return a + b;
}

// Cau 2
float my_abs(float a)
{
    if (a < 0)
    {
        return -a;
    }
    return a;
}

// Cau 3
int checkPrime(long long n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

// Cau 4
int max2(int a, int b)
{
    return a > b ? a : b;
}

// Cau 5
int max3(int a, int b, int c)
{
    return max2(a, max2(b, c));
}

// Cau 6
int is_leap_year(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Cau 7 & 8
int is_Armstrong(int n)
{
    int rank = 0;
    int tmp = n;
    while (tmp > 0)
    {
        rank++;
        tmp /= 10;
    }

    tmp = n;
    int sum = 0;
    while (tmp > 0)
    {
        sum += pow(tmp % 10, rank);
        tmp /= 10;
    }
    return sum == n;
}

//Cau 9
double power(double x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n < 0)
    {
        return 1 / power(x, -n);
    }
    else
    {
        return x * power(x, n - 1);
    }
}

//Cau 10
void printPrimeNumbers(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        if (checkPrime(i))
        {
            printf("%d ", i);
        }
    }
}