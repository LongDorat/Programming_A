#include <stdio.h>

#define OUTPUT_FILE "output.txt"

void write_text(FILE *file, int a, int b)
{
    fprintf(file, "%d %d", a, b);
    fclose(file);
}

int main()
{
    FILE *write_to_file = fopen(OUTPUT_FILE, "w");
    if (write_to_file == NULL)
    {
        perror("Cannot open file to write!");
        return 1;
    }

    write_text(write_to_file, 4, 7);

    fclose(write_to_file);

    FILE *file = fopen(OUTPUT_FILE, "r");
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