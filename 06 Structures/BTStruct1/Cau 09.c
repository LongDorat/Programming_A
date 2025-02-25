#include <stdio.h>

struct PhanSo
{
    int TuSo;
    int MauSo;
};

int main()
{
    struct PhanSo a;
    scanf("%d%d", &a.TuSo, &a.MauSo); // Nhap tu ban phim cho tung truong
    printf(" %d/%d", a.TuSo, a.MauSo);
}