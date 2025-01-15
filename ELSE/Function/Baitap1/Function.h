#include "Include.h"
// Solution 1
int add(int a, int b)
{
    return a + b;
}

// Solution 2
int my_abs(int num)
{
    return num > 0 ? num : -num;
}

// Solution 3
bool isPrime(long num)
{
    if (num < 2)
        return 0;

    for (long i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

// Solution 4 & 5
int max(int a, int b)
{
    return a > b ? a : b;
}

// Solution 5
int max3(int a, int b, int c)
{
    return max(max(a, b), c);
}

// Solution 6
bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

// Solution 7 & 8
bool isArmstrong(int num)
{
    int rank = 0;
    int temp = num;
    int sum = 0;

    while (temp != 0)
    {
        rank++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0)
    {
        sum += pow(temp % 10, rank);
        temp /= 10;
    }

    return sum == num;
}

// Solution 9
int power(int num, int rank)
{
    return pow(num, rank);
}

// Solution 10
void printPrimeNumbers(int a, int b)
{
    for(int i = a; i <= b; i++)
    {
        if (isPrime(i))
            printf("%d ", i);
    }
}