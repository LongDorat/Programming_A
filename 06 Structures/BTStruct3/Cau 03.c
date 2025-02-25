#include <stdio.h>

typedef struct
{
    double he_so;
    int bac;
} DonThuc;

struct DaThuc
{
    DonThuc A[100];
    int so_luong;
};

int main()
{
    struct DaThuc d = {{{1.5, 5}}, 1};
    printf("Size A = %lu x %lu\n",
    sizeof(d.A) / sizeof(DonThuc), sizeof(DonThuc));
    printf("n = %d\n", d.so_luong);
}