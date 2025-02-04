#include "Include.h"

int isPalindrome(int A[], int n)
{
    int reverse[1000];

    for (int i = sizeof(A) - 1; i >= 0; i--)
    {
        reverse[i] = A[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i] != reverse[i])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int A[] = {-1, 1, 0, 1, -1};
    int n = sizeof(A) / sizeof(int);
    if (isPalindrome(A, n))
        printf("YES");
    else
        printf("NO");
    return 0;
}