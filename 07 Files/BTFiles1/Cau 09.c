#include <stdio.h>

#define OUTPUT_FILE "output.inc"

void write_binary(FILE *file, int a)
{
    fwrite(&a, sizeof(int), 1, file);
}

int main()
{
    FILE *write_to_file = fopen(OUTPUT_FILE, "wb");
    if (write_to_file == NULL)
    {
        perror("Cannot open file to write!");
        return 1;
    }

    write_binary(write_to_file, 4);
    fclose(write_to_file);

    FILE *file = fopen(OUTPUT_FILE, "rb");
    if (file == NULL)
    {
        perror("Cannot open file to read!");
        return 1;
    }

    int a;
    fread(&a, sizeof(int), 1, file);
    fclose(file);

    printf("%d", a);

    return 0;
}