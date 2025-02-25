#include "Include.h"

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[1000];
    int numberOfPrimes = 0;
    int Primes[1000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        printf("%d ", a[i]);
        if (isPrime(a[i]))
        {
            Primes[numberOfPrimes] = a[i];
            numberOfPrimes++;
        }
    }
    printf("\n");

    printf("%d\n", numberOfPrimes);

    for (int i = 0; i < numberOfPrimes; i++)
    {
        printf("%d ", Primes[i]);
    }
    printf("\n");

    return 0;
}