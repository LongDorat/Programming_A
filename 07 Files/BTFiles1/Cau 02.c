#include <stdio.h>
#include <stdlib.h>

#define INPUT_FILE "input.txt"
#define OUTPUT_FILE "output.txt"

void is_sorted(char *input_file, char *output_file);

int main()
{
    FILE *input_file = fopen(INPUT_FILE, "w");
    fprintf(input_file, "5\n1 2 3 4 5"); // Change this input to the input.txt file
    fclose(input_file);

    is_sorted(INPUT_FILE, OUTPUT_FILE);

    FILE *output_file = fopen(OUTPUT_FILE, "r");
    char c;
    while ((c = fgetc(output_file)) != EOF)
    {
        printf("%c", c);
    }
    fclose(output_file);

    return 0;
}

void is_sorted(char *input_file, char *output_file)
{
    FILE *input_file_ptr = fopen(input_file, "r");
    if (input_file_ptr == NULL)
    {
        perror("Cannot open file to read!");
        exit(EXIT_FAILURE);
    }

    int n;
    fscanf(input_file_ptr, "%d", &n);

    double a[100];
    for (int i = 0; i < n; i++)
    {
        fscanf(input_file_ptr, "%lf", &a[i]);
    }

    fclose(input_file_ptr);

    FILE *output_file_ptr = fopen(output_file, "w");
    if (output_file_ptr == NULL)
    {
        perror("Cannot open file to write!");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            fprintf(output_file_ptr, "NO");
            fclose(output_file_ptr);
            return;
        }
    }

    fprintf(output_file_ptr, "YES");
    fclose(output_file_ptr);

    return;
}