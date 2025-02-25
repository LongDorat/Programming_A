#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{

    char *HoTen;

    float LT, TH;

    char *DiemChu;

} SinhVien;

void nhapDS(SinhVien **list, int n)
{
    *list = (SinhVien *)malloc(n * sizeof(SinhVien));
    for (int i = 0; i < n; i++)
    {
        (*list)[i].HoTen = (char *)malloc(31 * sizeof(char));
        (*list)[i].DiemChu = (char *)malloc(3 * sizeof(char));

        scanf(" ");
        fgets((*list)[i].HoTen, 31, stdin);
        (*list)[i].HoTen[strlen((*list)[i].HoTen) - 1] = '\0';
        scanf("%f %f", &(*list)[i].LT, &(*list)[i].TH);

        float total = (*list)[i].LT+ (*list)[i].TH;
        if (total >= 9)
        {
            (*list)[i].DiemChu = "A";
        }
        else if (total >= 8)
        {
            (*list)[i].DiemChu = "B+";
        }
        else if (total >= 7)
        {
            (*list)[i].DiemChu = "B";
        }
        else if (total >= 6)
        {
            (*list)[i].DiemChu = "C+";
        }
        else if (total >= 5)
        {
            (*list)[i].DiemChu = "C";
        }
        else if (total >= 4.5)
        {
            (*list)[i].DiemChu = "D+";
        }
        else if (total >= 4)
        {
            (*list)[i].DiemChu = "D";
        }
        else
        {
            (*list)[i].DiemChu = "F";
        }
    }
}

void inDS(SinhVien *list, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s %.3f %.3f %s\n", list[i].HoTen, list[i].LT, list[i].TH, list[i].DiemChu);
    }
}

int main()
{
    int n;
    SinhVien *list;
    scanf("%d ", &n);
    nhapDS(&list, n);
    inDS(list, n);
    free(list);
}