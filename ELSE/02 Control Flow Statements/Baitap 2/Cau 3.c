#include "Include.h"

int main()
{
    float LT, TH1, TH2, TH3, TH4;
    scanf("%d%d%d%d%d", &LT, &TH1, &TH2, &TH3, &TH4);

    float TB = (LT + TH1 + TH2 + TH3 + TH4) / 5;

    TB >= 4 ? printf("DAT") : printf("KHONG DAT");

    return 0;
}