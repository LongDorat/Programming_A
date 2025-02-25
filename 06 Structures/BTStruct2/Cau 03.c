#include <stdio.h>

struct PhanSo
{
    int tuSo;
    int mauSo;
};

void inPhanSo(struct PhanSo a)
{
    printf("%d/%d\n", a.tuSo, a.mauSo);
}

int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

void cong(struct PhanSo a, struct PhanSo b, struct PhanSo *c)
{
    c->tuSo = a.tuSo * b.mauSo + b.tuSo * a.mauSo;
    c->mauSo = a.mauSo * b.mauSo;

    int gcd = GCD(c->tuSo, c->mauSo);
    c->tuSo /= gcd;
    c->mauSo /= gcd;

    if (c->mauSo < 0)
    {
        c->tuSo = -c->tuSo;
        c->mauSo = -c->mauSo;
    }
}

int main()
{
    struct PhanSo a = {-10, 15};
    struct PhanSo b = {2, 3};
    struct PhanSo c;
    inPhanSo(a);
    inPhanSo(b);
    cong(a, b, &c);
    inPhanSo(c);
}