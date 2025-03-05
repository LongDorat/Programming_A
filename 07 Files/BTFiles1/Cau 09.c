#include <stdio.h>

#define f "output.inc"

void write_binary(FILE *file, int a)
{
    fwrite(&a, sizeof(int), 1, file);
}

int main()
{
    FILE *writeToFile = fopen(f, "wb");
    if (writeToFile == NULL)
    {
        perror("Cannot open file to write!");
        return 1;
    }

    write_binary(writeToFile, 4);
    fclose(writeToFile);

    FILE *file = fopen(f, "rb");
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