#include "Include.h"

// Cau 1
double power(double x, int n)
{
    if (n == 0)
        return 1;
    return x * power(x, n - 1);
}

// Cau 2
void factorize(int n)
{
    printf("%d = ", n);
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            while (n % i == 0)
            {
                printf("%d", i);
                n /= i;

                if (n > 1)
                    printf(" x ");
            }
        }
    }
}

// Cau 3
int isPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    return sum == n;
}

// Cau 4
int isPrime(int n)
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

// Cau 5
int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}
int LCM(int a, int b)
{
    return (a * b) / GCD(a, b);
}

// Cau 6
void reduce(int a, int b)
{
    int gcd = GCD(a, b);
    printf("%d/%d = %d/%d", a, b, a / gcd, b / gcd);
}

// Cau 7
char lowCase(char c)
{
    return (c >= 'A' && c <= 'Z') ? c + 32 : c;
}

// Cau 8
int isPalindrome(int n)
{
    int temp = n, rev = 0;
    while (temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}

// Cau 9
int isPower2(int n)
{
    return log2(n) == (int)log2(n);
}

// Cau 10
int C(int n, int k)
{
    if (k == 0 || k == n)
    {
        return 1;
    }
    return C(n - 1, k - 1) + C(n - 1, k);
}