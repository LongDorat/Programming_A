#include <stdio.h>

struct SinhVien
{
    char *HoTen;
    float LT, TH;
};
typedef struct SinhVien SinhVien;

int main()
{
    SinhVien sv;
    char h[50];

    fgets(h, 50, stdin);
    if (h[strlen(h) - 1] == '\n')
        h[strlen(h) - 1] = '\0';
    sv.HoTen = strdup(h);
    scanf("%f%f", &sv.LT, &sv.TH);
    printf("%s %.3f %.3f\n", sv.HoTen, sv.LT, sv.TH);
}