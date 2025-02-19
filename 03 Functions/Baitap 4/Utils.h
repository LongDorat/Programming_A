#include "Include.h"

long long Factorial(int n)
{
    if (n == 0)
        return 1;
    return n * Factorial(n - 1);
}
int Combine(int n, int k)
{
    return Factorial(n) / (Factorial(k) * Factorial(n - k));
}