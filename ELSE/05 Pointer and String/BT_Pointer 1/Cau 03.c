#include <stdio.h>

void getMax(float a[], int n, float *pMaxValue, int *pMaxPos)
{
    *pMaxValue = a[0];
    *pMaxPos = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > *pMaxValue)
        {
            *pMaxValue = a[i];
            *pMaxPos = i;
        }
    }
}

int main()
{
    float a[] = {1,2};
    int n = sizeof(a) / sizeof(float);
    float Max;
    int vtMax;
    getMax(a, n, &Max, &vtMax);
    printf("%.4f at %d", Max, vtMax);
}