#include <stdio.h>

#define outputFile "output.inc"

struct Complex
{
    float real;
    float image;
};

void add_and_write(FILE *file, struct Complex a, struct Complex b)
{
    struct Complex sum;
    sum.real = a.real + b.real;
    sum.image = a.image + b.image;
    fwrite(&sum, sizeof(struct Complex), 1, file);
}

int main()
{
    FILE *file = fopen(outputFile, "wb");
    if (file == NULL)
    {
        perror("Cannot open file to write!");
        return 1;
    }

    struct Complex a, b;
    a.real = 1;
    a.image = 2.1;
    b.real = 3;
    b.image = 2.05;
    add_and_write(file, a, b);
    fclose(file);

    file = fopen(outputFile, "rb");
    if (file == NULL)
    {
        perror("Cannot open file to read!");
        return 1;
    }

    struct Complex sum;
    fread(&sum, sizeof(struct Complex), 1, file);
    printf("%.2f + %.2f\n", sum.real, sum.image);
    fclose(file);

    return 0;
}