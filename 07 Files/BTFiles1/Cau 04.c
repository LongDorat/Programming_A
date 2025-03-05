#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct PhanSo
{
    int TuSo;
    int MauSo;
};

struct PhanSo reduce(int TuSo, int MauSo)
{
    struct PhanSo ps;
    ps.TuSo = TuSo;
    ps.MauSo = MauSo;
    int a = ps.TuSo, b = ps.MauSo;
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    ps.TuSo /= a;
    ps.MauSo /= a;
    return ps;
}

int main()
{
    char *s = (char *)malloc(100 * sizeof(char));
    fgets(s, 100, stdin);
    s[strlen(s) - 1] = '\0';

    FILE *input = fopen(s, "rb");
    if (input == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    struct PhanSo ps1, ps2;
    size_t result;

    result = fread(&ps1, sizeof(struct PhanSo), 1, input);
    if (result != 1)
    {
        perror("Error reading ps1");
        fclose(input);
        return 1;
    }

    result = fread(&ps2, sizeof(struct PhanSo), 1, input);
    if (result != 1)
    {
        perror("Error reading ps2");
        fclose(input);
        return 1;
    }

    fclose(input);

    int TuSo = ps1.TuSo * ps2.MauSo + ps2.TuSo * ps1.MauSo;
    int MauSo = ps1.MauSo * ps2.MauSo;
    struct PhanSo sum = reduce(TuSo, MauSo);
    printf("%d/%d + %d/%d = %d/%d", ps1.TuSo, ps1.MauSo, ps2.TuSo, ps2.MauSo, sum.TuSo, sum.MauSo);

    free(s);
    return 0;
}