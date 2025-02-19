#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float C, P, S;

    scanf("%f %f %f", &a, &b, &c);

    C = a + b + c;
    P = C / 2;
    S = sqrt(P * (P - a) * (P - b) * (P - c));

    printf("Chu vi: %.02f\nDien tich: %.02f", C, S);
    return 0;
}