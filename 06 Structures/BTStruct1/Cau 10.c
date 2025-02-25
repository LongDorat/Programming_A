#include <stdio.h>

struct PhanSo
{
    int tuSo;
    int mauSo;
};

struct PhanSo nhapPhanSo()
{
    struct PhanSo a;
    scanf("%d %d", &a.tuSo, &a.mauSo);
    return a;
}

void inPhanSo(struct PhanSo a)
{
    printf("%d/%d", a.tuSo, a.mauSo);
}

int main()
{
    struct PhanSo a;
    a = nhapPhanSo();
    inPhanSo(a);
}