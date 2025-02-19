#include "Include.h"

// Cau 1
bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int countPrimeNumbers(long a, long b)
{
    int count = 0;
    for (long i = a; i <= b; i++)
    {
        if (isPrime(i))
            count++;
    }
    return count;
}

// Cau 2
long long sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sum(n - 1);
}

//Cau 3
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

//Cau 4 & 5
double power(double x, int n)
{
    if (n == 0)
        return 1;
    return x * power(x, n - 1);
}

//Cau 6
int NumDigits(int n)
{
    if (n == 0)
        return 1;
    return 1 + NumDigits(n / 10);
}

//Cau 7
void printN(int n)
{
    if (n == 0)
        return;
    printf("%d\n", n);
    printN(n - 1);
}

//Cau 8
void dec2bin(int n)
{
    if (n == 0)
        return;
    dec2bin(n / 2);
    printf("%d", n % 2);
}

//Cau 9 & 10
char lowCase(char *c)
{
    return (*c >= 'A' && *c <= 'Z') ? *c + 32 : *c;
}