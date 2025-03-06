#include <stdio.h>

#define OUTPUT_FILE "output.inc"

struct complex
{
    float real;
    float imag;
};

void add_and_write(FILE *file, struct complex a, struct complex b)
{
    struct complex sum;
    sum.real = a.real + b.real;
    sum.imag = a.imag + b.imag;
    fwrite(&sum, sizeof(struct complex), 1, file);
}

int main()
{
    FILE *file = fopen(OUTPUT_FILE, "wb");
    if (file == NULL)
    {
        perror("Cannot open file to write!");
        return 1;
    }

    struct complex a, b;
    a.real = 1;
    a.imag = 2.1;
    b.real = 3;
    b.imag = 2.05;
    add_and_write(file, a, b);
    fclose(file);

    file = fopen(OUTPUT_FILE, "rb");
    if (file == NULL)
    {
        perror("Cannot open file to read!");
        return 1;
    }

    struct complex sum;
    fread(&sum, sizeof(struct complex), 1, file);
    printf("%.2f + %.2f\n", sum.real, sum.imag);
    fclose(file);

    return 0;
}