#include <stdio.h>

struct DonThuc{
    double he_so;
    int bac;
};

void InDonThuc(struct DonThuc d)
{
    if (d.bac == 0)
    {
        printf("%.2lf", d.he_so);
    }
    else if (d.bac == 1)
    {
        printf("%.2lfx", d.he_so);
    }
    else
    {
        printf("%.2lfx^%d", d.he_so, d.bac);
    }
}

int main()
{
    struct DonThuc d = {1.5, 5};
    InDonThuc(d);
}