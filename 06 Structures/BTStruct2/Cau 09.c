#include <stdio.h>
#include <string.h>

struct SinhVien
{
    char *HoTen;
    float LT, TH;
    char *diemChu;
};
typedef struct SinhVien SinhVien;

SinhVien nhapSV()
{
    char HoTen[50];
    fgets(HoTen, 50, stdin);
    HoTen[strlen(HoTen) - 1] = '\0';

    SinhVien a;
    a.HoTen = strdup(HoTen);
    scanf("%f %f", &a.LT, &a.TH);

    float total = a.LT + a.TH;
    if (total >= 9)
    {
        a.diemChu = "A";
    }
    else if (total >= 8)
    {
        a.diemChu = "B+";
    }
    else if (total >= 7)
    {
        a.diemChu = "B";
    }
    else if (total >= 6)
    {
        a.diemChu = "C+";
    }
    else if (total >= 5)
    {
        a.diemChu = "C";
    }
    else if (total >= 4.5)
    {
        a.diemChu = "D+";
    }
    else if (total >= 4)
    {
        a.diemChu = "D";
    }
    else
    {
        a.diemChu = "F";
    }

    return a;
}

void inSV(SinhVien a)
{
    printf("%s %.3f %.3f %s", a.HoTen, a.LT, a.TH, a.diemChu);
}

int main()
{

    SinhVien a;

    a = nhapSV(); // Gọi hàm nhập 1 sinh viên

    inSV(a); // Hiển thị thông tin sinh viên lên màn hình

    return 0;
}