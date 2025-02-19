#include "Include.h"

// Cau 1
int kth_digits(int n, int k)
{
    if (k == 0)
        return n % 10;
    return kth_digits(n / 10, k - 1);
}

// Cau 2
void in_nguoc(int n)
{
    if (n == 0)
        return;
    printf("%d ", n % 10);
    in_nguoc(n / 10);
}

// Cau 3
void in_xuoi(int n)
{
    if (n == 0)
        return;
    in_xuoi(n / 10);
    printf("%d ", n % 10);
}

//Cau 4
double power(double a, int n)
{
    if (n == 0)
        return 1;
    return power(a, n - 1) * a;
}

// Cau 5
int count(int n)
{
    if (n == 0)
        return 0;
    return 1 + count(n / 10);
}