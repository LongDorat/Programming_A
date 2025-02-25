#include <stdio.h>

struct Complex
{
    double Real;
    double Image;
};
typedef struct Complex Complex; // Dinh nghia kieu du lieu moi

int main()
{
    Complex a;
    scanf("%lf%lf", &a.Real, &a.Image);        // Nhap tu ban phim cho tung truong
    printf("%.3lf + i%.3lf", a.Real, a.Image); // Hien thi
}