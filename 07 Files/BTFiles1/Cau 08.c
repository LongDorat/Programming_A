#include <stdio.h>

#define f "output.txt"

void write_text(FILE *file, int a, int b)
{
    fprintf(file, "%d %d", a, b);
    fclose(file);
}

int main()
{
    FILE *writeToFile = fopen(f, "w");
    if (writeToFile == NULL)
    {
        perror("Cannot open file to write!");
        return 1;
    }

    write_text(writeToFile, 4, 7);

    fclose(writeToFile);

    FILE *file = fopen(f, "r");
    if (file == NULL)
    {
        perror("Cannot open file to read!");
        return 1;
    }

    int a, b;
    fscanf(file, "%d %d", &a, &b);
    fclose(file);

    printf("%d %d", a, b);

    return 0;
}