#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct fraction
{
    int numerator;
    int denominator;
};

struct fraction reduce(int numerator, int denominator)
{
    struct fraction frac;
    frac.numerator = numerator;
    frac.denominator = denominator;
    int a = frac.numerator, b = frac.denominator;
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    frac.numerator /= a;
    frac.denominator /= a;
    return frac;
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

    struct fraction frac1, frac2;
    size_t result;

    result = fread(&frac1, sizeof(struct fraction), 1, input);
    if (result != 1)
    {
        perror("Error reading frac1");
        fclose(input);
        return 1;
    }

    result = fread(&frac2, sizeof(struct fraction), 1, input);
    if (result != 1)
    {
        perror("Error reading frac2");
        fclose(input);
        return 1;
    }

    fclose(input);

    int numerator = frac1.numerator * frac2.denominator + frac2.numerator * frac1.denominator;
    int denominator = frac1.denominator * frac2.denominator;
    struct fraction sum = reduce(numerator, denominator);
    printf("%d/%d + %d/%d = %d/%d", frac1.numerator, frac1.denominator, frac2.numerator, frac2.denominator, sum.numerator, sum.denominator);

    free(s);
    return 0;
}