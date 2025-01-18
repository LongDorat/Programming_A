#include "Include.h"

int main()
{
    char name;
    float LT, TH1, TH2, TH3, TH4, TB;

    scanf("%s\n%f %f %f %f %f", &name, &LT, &TH1, &TH2, &TH3, &TH4);
    TB = (LT + TH1 + TH2 + TH3 + TH4) / 5;
    printf("%s\nLy thuyet: %.02f\nThuc hanh 1: %.02f\nThuc hanh 2: %.02f\nThuc hanh 3: %.02f\nThuc hanh 4: %.02f\nTrung binh: %.02f", &name, LT, TH1, TH2, TH3, TH4, TB);

    return 0;
}