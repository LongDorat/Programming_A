#include "Include.h"
#include "Utils.h"

// Cau 1
#define Ackermann A
int Ackermann(int m, int n)
{
    if (m == 0)
        return n + 1;
    else if (n == 0)
        return Ackermann(m - 1, 1);
    else
        return Ackermann(m - 1, Ackermann(m, n - 1));
}

// Cau 2
#define HaNoiTower Move
void HaNoiTower(int n, char A, char B, char C)
{
    if (n == 1)
    {
        printf("%c -> %c\n", A, C);
        return;
    }

    HaNoiTower(n - 1, A, C, B);
    printf("%c -> %c\n", A, C);
    HaNoiTower(n - 1, B, A, C);
}

// Cau 3
long long Factorial2(int n)
{
    if (n <= 0)
        return 1;

    return n * Factorial2(n - 2);
}

// Cau 4
#define Fibonacci F
int Fibonacci(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

// Cau 5
void TriangleOfPascal(int n)
{
    if (n == 0)
        printf("%5d", 1);

    for (int i = 0; i <= n; i++)
    {
        for (int k = 0; k <= i; k++)
        {
            printf("%5d", Combine(i, k));
        }
        printf("\n");
    }
}

// Cau 6
#define HarmonicSeries S
double HarmonicSeries(int n)
{
    if (n == 1)
        return 1;
    return 1.0 / n + HarmonicSeries(n - 1);
}

// Cau 7
double cosin(double x, double epsilon)
{
    int n = 0;
    double sum = pow(-1, n) * (pow(x, 2 * n) / Factorial(2 * n));
    while (fabs(pow(-1, n) * (pow(x, 2 * n) / Factorial(2 * n))) > epsilon)
    {
        n += 1;
        sum += pow(-1, n) * (pow(x, 2 * n) / Factorial(2 * n));
    }
    return sum;
}

// Cau 8
int isSquareNumber(int n)
{
    return sqrt(n) * sqrt(n) == n;
}

// Cau 9
int add(int a, int b)
{
    return a + b;
}

// Cau 10
void print_c(char c, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%c", c);
    }
}