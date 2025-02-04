#include "Include.h"

void reversePrint(int n) {
    if (n > 0) {
        reversePrint(n - 1);
        printf("%d ", n);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    reversePrint(n);

    return 0;
}