#include <stdio.h>
#include <string.h>

int main()
{
    float LT, TH1, TH2, TH3, TH4;
    scanf("%f %f %f %f %f", &LT, &TH1, &TH2, &TH3, &TH4);

    float TB = (LT + TH1 + TH2 + TH3 + TH4) / 5;
    char result[2];

    if (TB < 4)
    {
        strcpy(result, "F");
    }
    else if (TB < 4.5)
    {
        strcpy(result, "D");
    }
    else if (TB < 5)
    {
        strcpy(result, "D+");
    }
    else if (TB < 6)
    {
        strcpy(result, "C");
    }
    else if (TB < 7)
    {
        strcpy(result, "C+");
    }
    else if (TB < 8)
    {
        strcpy(result, "B");
    }
    else if (TB < 9)
    {
        strcpy(result, "B+");
    }
    else
    {
        strcpy(result, "A");
    }

    printf("Diem so: %.1f", TB);
    printf("\nDiem chu: %s", result);

    return 0;
}
