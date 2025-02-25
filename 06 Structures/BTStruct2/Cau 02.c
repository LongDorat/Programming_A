#include <stdio.h>

struct PhanSo
{
    int tuSo;
    int mauSo;
};

int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

void inPhanSo(struct PhanSo a)
{
    printf("%d/%d\n", a.tuSo, a.mauSo);
}

void chuanhoa(struct PhanSo *a)
{
    int gcd = GCD(a->tuSo, a->mauSo);
    a->tuSo /= gcd;
    a->mauSo /= gcd;
}

int main()
{
    struct PhanSo a = {10, 15};
    inPhanSo(a);
    chuanhoa(&a);
    inPhanSo(a);
}